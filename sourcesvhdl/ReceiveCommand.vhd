library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use work.my_package.all;

entity ReceiveCommand is
    Port ( 	clk : in std_logic;
			rst : in std_logic;
			start: in std_logic;
			tick: in std_logic;
			rx : in std_logic;
			cmdreceived : out std_logic;
			cmd : out std_logic_vector (0 to 47)
			);
end ReceiveCommand;

architecture Behavioral of ReceiveCommand is
type state_type is (idle, rxon, rxoff, finish);
signal state: state_type;
signal cnt_ws: std_logic_vector (1 downto 0);
signal din: std_logic_vector (7 downto 0);
signal Ind: natural range 0 to 6 := 0;
signal rdone: std_logic;

begin

	UARTReciever_inst: UARTReciever Port map(clk => clk, rst => rst, tick => tick, rx => rx, d_out => din, rx_done => rdone);
	
	process(clk, rst)
	begin
		if(rst = '1') then
			Ind <= 0;
			cmd <= (others => '0'); 
			cnt_ws <= (others => '0');
			cmdreceived <= '0';
			state <= idle;
		else
			if(rising_edge(clk)) then
				case state is
					when idle =>
						cmdreceived <= '0';
						if start = '1' then
							cmd <= (others => '0'); 
							Ind <= 0;
							state <= rxon;
						end if;	
					when rxon =>
						if rdone = '1' then
							cmd(Ind*8 to Ind*8+7) <= din;
							state <= rxoff;
							Ind <= Ind + 1;	
						end if;
					when rxoff =>
						if rdone = '0' then
							if Ind = 6 then
								state <= finish;
								cmdreceived <= '1';
								Ind <= 0;
							else
								state <= rxon;
							end if;	
						end if;
					when others =>	
						cnt_ws <= cnt_ws + 1;
						if cnt_ws = 3 then
							cnt_ws <= (others => '0');
							state <= idle;
						end if;
				end case;
			end if;
		end if;	
	end process;
	
	
end Behavioral;

