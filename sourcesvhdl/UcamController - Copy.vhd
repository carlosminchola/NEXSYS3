library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use work.my_package.all;

entity UcamController is
    port(	clk : in std_logic; 
				rst : in std_logic; 
				start : in std_logic;
				rx: in std_logic;
				tx : out std_logic;
				ledsyn : out std_logic;
				ledinit : out std_logic;
				ledpic : out std_logic;				
				led_failed_initial : out std_logic;
				led_failed_sync : out std_logic;
				led_failed_picture : out std_logic;
				tp : out std_logic;
				tx_pc : out std_logic
		);
end UcamController;

architecture behavioral of UcamController is

type state_type is (idle, sync0, sync1, sync2, sync3, sync4, sync5, sync6, attempts_sync, delay5ms, initial0, initial1, initial2, initial3, initial4, getframe0, getframe1, getframe2, getframe3, getframe4, getframe5, getframe6, getframe7, lastack, finish, failed_initial, failed_sync, failed_picture);
type state1_type is (capture0, capture1, capture2, capture3, capture4, capture5, capture6, finish);
signal state : state_type;
signal state1 : state1_type;
signal starttx, startrx, tick, cmdsent, cmdreceived, next_ack, reset, valid_data, done_data, starting : std_logic;
signal cnt_ws : std_logic_vector(1 downto 0);
signal cmd, cmdver, cmdVal, datafromCAM : std_logic_vector(0 to 47);
signal tmpbuffer : std_logic_vector(0 to 7);
signal sizeFrame : std_logic_vector(0 to 23);
signal num_data : std_logic_vector(0 to 23);
signal cnt5ms : std_logic_vector(22 downto 0);
signal attempts : std_logic_vector(8 downto 0);
signal data : std_logic_vector(7 downto 0); 
signal Ind : natural range 0 to 6 := 0;

begin

	--reset <= rst;
	tp <= startrx;
	SendCommand_inst: SendCommand port map ( clk => clk, rst => reset, start => starttx, cmd => cmd, tick => tick, tx => tx, cmdsent => cmdsent);
	
	ReceiveCommand_inst: ReceiveCommand port map( clk => clk, rst => reset, start => startrx, tick => tick, rx => rx, cmdreceived => cmdreceived, cmd => cmdver);
		
	BaudRateGenerator_inst: BaudRateGenerator Port map(	clk => clk,	rst => reset, tick => tick);
	
	TxPc_inst: UARTTransmitter port map( clk => clk, rst => rst, tick => tick, d_in => data, tx_start => valid_data, tx_done => done_data, tx => tx_pc);

	Debounce_inst0: Debounce Port map( 	clk => clk,  i => rst,  o => reset);
	
	Debounce_inst1: Debounce Port map( 	clk => clk, i => start, o => starting);
	
	process(clk, reset)
	begin
		if (reset = '1') then
			
			starttx <= '0';		
			startrx <= '0';
			cnt_ws <= (others => '0');	
			next_ack <= '0';
			ledsyn <= '0';
			ledinit <= '0';
			ledpic <= '0';
			led_failed_initial <= '0';
			led_failed_sync <= '0';
			led_failed_picture <= '0';
			sizeFrame <= (others => '0');	
			cmdVal <= (others => '0');	
			attempts <= (others => '0');	
			data <= (others => '0'); 
			cnt5ms <= (others => '0');	
			datafromCAM <= (others => '0');	
			Ind <= 0;
			valid_data <= '0';
			state1 <= capture0;
			state <= idle;

		elsif rising_edge(clk) then
					
			case state is
				
				---------------------SYNCRONIZATION--------------------	
				
				when idle =>
					if starting = '1' then
						state <= sync0;
						cmd <= x"AA_0D_00_00_00_00";
						cnt5ms <= (others => '0');	
						Ind <= 0;
						valid_data <= '0';
					end if;
				-------------------------------------------------------
				when sync0 =>
					starttx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= sync1;
					end if;
				-------------------------------------------------------
				when sync1 =>
					starttx <= '0';
					if cmdsent = '1' then	
						state <= sync2;
						cmdVal <= x"AA_0E_0D_00_00_00";
					end if;
				-------------------------------------------------------		
				when sync2 =>	
					startrx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= sync3;
					end if;
				-------------------------------------------------------	
				when sync3 =>
					startrx <= '0';
					if cmdreceived = '1' then		
						if ((cmdver(0 to 23) = cmdVal(0 to 23)) and (cmdver(32 to 47) = cmdVal(32 to 47))) then
							state <= sync4;
							if ((next_ack = '1') and (cmdver(24 to 31) /= cmdVal(24 to 31))) then
								state <= attempts_sync;
							elsif (next_ack = '0') then
								tmpbuffer <= cmdver(24 to 31);
							end if;	
						else
							state <= attempts_sync;
						end if;
					end if;
				-------------------------------------------------------
				when sync4 =>	
					if cmdreceived = '0' then
						if next_ack = '1' then
							state <= sync5;
							cmd <= x"AA_0E_0D" & tmpbuffer & x"00_00";
						else
							next_ack <= '1';
							cmdVal <= x"AA_0D_00_00_00_00";
							state <= sync2;
						end if;
					end if;
				-------------------------------------------------------
				when sync5 =>	
					starttx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= sync6;
					end if;
				-------------------------------------------------------		
				when sync6 =>
					starttx <= '0';
					if cmdsent = '1' then	
						state <= initial0;
						cmd <= x"AA_01_00_06_03_00";
						ledsyn <= '1';
						next_ack <= '0';
					end if;	
				-------------------------------------------------------	
				when attempts_sync => 
					next_ack <= '0';
					state <= delay5ms;
					cmd <= x"AA_0D_00_00_00_00";
					attempts <= attempts + 1;
					if attempts > 128 then
						attempts <= (others => '0');
						state <= failed_sync;
					end if;
				-------------------------------------------------------	
				when delay5ms =>	
					cnt5ms <= cnt5ms + 1;
					if cnt5ms = 1000000 then
						state <= sync0;
						cnt5ms <= (others => '0');	
					end if;
						
				-------------------------INITIAL-----------------------		
				
				when initial0 =>		
					starttx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= initial1;
					end if;
				-------------------------------------------------------		
				when initial1 =>	
					starttx <= '0';
					if cmdsent = '1' then	
						state <= initial2;
					end if;
				-------------------------------------------------------	
				when initial2 =>	
					startrx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= initial3;
					end if;	
				-------------------------------------------------------			
				when initial3 =>
					startrx <= '0';
					if cmdreceived = '1' then		
						if ((cmdver(0 to 23) = x"AA_0E_01") and (cmdver(32 to 47) = x"00_00")) then
							state <= initial4;
						else
							state <= failed_initial;
						end if;
					end if;
				-------------------------------------------------------		
				when initial4 =>
					if cmdreceived = '0' then
						ledinit <= '1';
						state <= getframe0;
						cmd <= x"AA_04_02_00_00_00";
					end if;
					
				----------------------GET DATAS------------------------			
				
				when getframe0 =>		
					starttx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= getframe1;
					end if;
				-------------------------------------------------------		
				when getframe1 =>	
					starttx <= '0';
					if cmdsent = '1' then	
						state <= getframe2;
						cmdVal <= x"AA_0E_04_00_00_00";
					end if;
				-------------------------------------------------------	
				when getframe2 =>	
					startrx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= getframe3;
					end if;	
				-------------------------------------------------------	
				when getframe3 =>
					startrx <= '0';
					if cmdreceived = '1' then		
						state <= getframe4;
						if ((cmdver(0 to 23) = cmdVal(0 to 23)) and (cmdver(32 to 47) = cmdVal(32 to 47)) and (next_ack = '0')) then
							tmpbuffer <= cmdver(24 to 31);
						elsif ((cmdver(0 to 23) = cmdVal(0 to 23)) and (next_ack = '1')) then
							sizeFrame <= cmdver(24 to 47);
						else
							state <= failed_picture;
						end if;
					end if;
				-------------------------------------------------------		
				when getframe4 =>	
					if cmdreceived = '0' then
						if next_ack = '1' then
							state <= getframe5;
							ledpic <= '1';
						else
							next_ack <= '1';
							cmdVal <= x"AA_0A_02_00_00_00";
							state <= getframe2;
						end if;
					end if;	
				-------------------------------------------------------		
				when getframe5 =>	
					startrx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= getframe6;
					end if;	
				-------------------------------------------------------	
				when getframe6 =>		
					startrx <= '0';
					if cmdreceived = '1' then		
						datafromCAM <= cmdver;
						num_data <= num_data + 6;
						state <= getframe7;
					end if;
				-------------------------------------------------------		
				when getframe7 =>
					if cmdreceived = '0' then		
						state <= getframe5;
						if num_data >= sizeFrame then
							state <= lastack;
							cmd <= x"AA_0E_0A" & tmpbuffer & x"00_00";
						end if;
					end if;
				-------------------------------------------------------			
				when lastack =>	
					starttx <= '1';
					cnt_ws <= cnt_ws + 1;
					if cnt_ws = 3 then
						cnt_ws <= (others => '0');
						state <= finish;
					end if;
				-------------------------------------------------------			
				when failed_initial | failed_picture | failed_sync =>	
					if state = failed_initial then
						led_failed_initial <= '1';
						led_failed_sync <= '0';
						led_failed_picture <= '0';
					elsif state = failed_sync then
						led_failed_initial <= '0';
						led_failed_sync <= '1';
						led_failed_picture <= '0';
					else
						led_failed_initial <= '0';
						led_failed_sync <= '0';
						led_failed_picture <= '1';
					end if;
					state <= idle;
				-------------------------------------------------------		
				when others =>	
					starttx <= '0';
					if cmdsent = '1' then	
						state <= idle;
					end if;
			end case;

			-------------------------------------------------------	
			-------------------------------------------------------	
			
			case state1 is
				when capture0 =>
					if state = getframe7 then
						state1 <= capture1;
					end if;
				when capture1 =>
					data <= datafromCAM(Ind*8 to Ind*8+7);	
					Ind <= Ind + 1;
					state1 <= capture2;
				when capture2 =>
					valid_data <= '1';
					state1 <= capture3;
				when capture3 =>
					state1 <= capture4;
				when capture4 =>
					state1 <= capture5;	
				when capture5 =>
					valid_data <= '0';
					if cmdreceived = '0' then		
						if Ind = 6 then
							Ind <= 0;
							state1 <= finish;
						else
							state1 <= capture6;	
						end if;
					end if;	
				when capture6 =>
					if done_data = '1' then
						state1 <= capture1;
					end if;
				when others =>	
					state1 <= capture0;
			end case;
			
		end if;
	end process;


end behavioral;

