library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity VerifyCommands is
    Port ( 	r_done : in std_logic;
			d_in : in std_logic_vector (7 downto 0)
			w_done : in std_logic;
			clk : in std_logic;
			rst : in std_logic;
			cmd : in std_logic_vector (1 downto 0);
			w_start : out std_logic;
			cmd_sent : out std_logic;
			d_out : out std_logic_vector (7 downto 0)
			);
end VerifyCommands;

architecture Behavioral of VerifyCommands is
type state_type is (idle,comm,txstart,txdone,waitst,finish);
signal state : state_type;
type state1_type is (idle,comm,txstart,txdone,waitst,finish);
signal state1, state_next : 
signal cnt_ws: std_logic_vector (2 downto 0);
signal Ind, Ind1 : natural range 0 to 6 := 0;
signal NumChars : natural range 0 to 6 := 6;
signal d_out_reg : std_logic_vector (7 downto 0);
constant CmdSync : std_logic_vector (0 to 47):= x"AA_0D_00_00_00_00";
constant CmdInit : std_logic_vector (0 to 47):= x"AA_01_00_06_03_00";
constant CmdGPic : std_logic_vector (0 to 47):= x"AA_04_02_00_00_00";
constant CmdData : std_logic_vector (0 to 23):= x"AA_0A_02";
constant CmdSyncVer : std_logic_vector (0 to 47):= x"AA_0E_0D_00_00_00";
constant CmdInitVer : std_logic_vector (0 to 47):= x"AA_0E_01_00_00_00";
constant CmdGPicVer : std_logic_vector (0 to 47):= x"AA_0E_04_00_00_00";
constant CmdDataVer : std_logic_vector (0 to 23):= x"AA_0E_0A";
--signal CmdAck : std_logic_vector (0 to 47):= x"AA_0E_00_00_00_00";
signal command : std_logic_vector (0 to 47); 
signal commandVer : std_logic_vector (0 to 47); 

begin

	d_out <= d_out_reg;
		
	Sending: process(clk, rst)
	begin
		if(rst = '1') then
			d_out_reg <= (others => '0');
			state <= idle;
			w_start <= '0';
			cnt_ws <= (others => '0');
			command <= (others => '0'); 
			Ind <= 0;
			NumChars <= 6;
			cmd_sent <= '0';
		else
			if(rising_edge(clk)) then
				case state is
					when idle =>
						cmd_sent <= '0';
						NumChars <= 6;
						if cmd = 0 then
							command <= CmdSync;
						elsif cmd = 1 then
							command <= CmdInit;
						elsif cmd = 2 then
							command <= CmdGPic;
						else
							command(0 to 23) <= CmdData;
							NumChars <= 3;
						end;
						state <= comm;
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
							if Ind = NumChars then
								state <= finish;
								cmd_sent <= '1';
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

	Verfying: process(clk, rst)
	begin
		if(rst = '1') then
			reg_d_in <= (others => '0'); 
			Ind1 <= 0;
		else
			if(rising_edge(clk)) then
				case state1 is
					when idle =>
						if stat_receiving = '1' then
							if cmd = 0 then
								commandVer <= CmdSyncVer;
							elsif cmd = 1 then
								commandVer <= CmdInitVer;
							elsif cmd = 2 then
								commandVer <= CmdGPicVer;
							else
								commandVer(0 to 23) <= CmdDataVer;
							end;
							state1 <= rxstart;
							state_next <= verify1;
						end if;	
					when rxflagon =>
						if r_done = '1' then
							reg_d_in <= d_in;
							state1 <= rxflagoff;
						end if;
					when rxflagoff =>
						if r_done = '0' then
							state1 <= state_next;
						end if;
					when verify1 =>
						if Ind1 /= 3 then	
							if reg_d_in = comandVer(Ind1*8 to Ind1*8+7) then
								state1 <= rxflagon;
							else
								state1 <= error;
							end if;
						end if;
						Ind1 <= Ind1 + 1;
						if Ind1 = 5 then
							Ind1 <= 0;
							if cmd = 0 then
								state1 <= rxflagon;
								commandVer(24 to 31) <= buffer_char;
								state_next <= verify2;
							end if;
						elsif Ind1 = 3 then	
							buffer_char <= reg_d_in;
						end if;
					when verify2 =>	
						if reg_d_in = comandVer(Ind1*8 to Ind1*8+7) then
							state1 <= rxflagon;
						else
							state1 <= error;
						end if;
						Ind1 <= Ind1 + 1;	
						if Ind1 = 5 then
							Ind1 <= 0;
						end if;
				end case;
			end if;
		end if;	
	end process;
	
end Behavioral;

