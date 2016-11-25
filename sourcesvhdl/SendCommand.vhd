library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use work.my_package.all;

entity SendCommand is
    Port ( 	clk : in std_logic;
			rst : in std_logic;
			start: in std_logic;
			cmd : in std_logic_vector (0 to 47);
			tick: in std_logic;
			tx : out std_logic;
			cmdsent : out std_logic
			);
end SendCommand;

architecture Behavioral of SendCommand is
type state_type is (idle,comm,txstart,txdone,waitst,finish);
signal state : state_type;
signal w_start, w_done: std_logic;
signal cnt_ws: std_logic_vector (1 downto 0);
signal Ind : natural range 0 to 6 := 0;
signal d_out_reg : std_logic_vector (7 downto 0);
signal command : std_logic_vector (0 to 47);

begin

	UARTTransmitter_inst: UARTTransmitter port map( clk => clk,	rst => rst,	tick => tick, d_in => d_out_reg, tx_start => w_start, tx_done => w_done, tx => tx);
	
	Sending: process(clk, rst)
	begin
		if(rst = '1') then
			d_out_reg <= (others => '0');
			state <= idle;
			w_start <= '0';
			cnt_ws <= (others => '0');
			command <= (others => '0'); 
			Ind <= 0;
			cmdsent <= '0';
		else
			if(rising_edge(clk)) then
				case state is
					when idle =>
						cmdsent <= '0';
						if start = '1' then
							state <= comm;
							command <= cmd;
						end if;	
					when comm =>
						d_out_reg <= command(Ind*8 to Ind*8+7);
						Ind <= Ind + 1;
						state <= txstart;
					when txstart =>
						w_start <= '1';
						state <= waitst;
					when waitst =>
						cnt_ws <= cnt_ws + 1;
						if cnt_ws = 3 then
							cnt_ws <= (others => '0');
							state <= txdone;
						end if;
					when txdone =>
						w_start <= '0';
						if (w_done = '1') then
							if Ind = 6 then
								state <= finish;
								cmdsent <= '1';
								Ind <= 0;
							else
								state <= comm;
							end if;	
						end if;
					when others =>
						cnt_ws <= cnt_ws + 1;
						if cnt_ws = 3 then
							cnt_ws <= (others => '0');
							state <= idle;
							command <= (others => '0'); 
						end if;
				end case;
			end if;	
		end if;
	end process;
	
end Behavioral;

