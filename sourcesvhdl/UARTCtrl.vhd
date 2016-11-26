library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity UARTCtrl is
    Port ( 	w_done : in  STD_LOGIC;
			clk : in  STD_LOGIC;
			rst : in  STD_LOGIC;
			w_start : out  STD_LOGIC;
			d_out : out  STD_LOGIC_VECTOR (7 downto 0)
			);
end UARTCtrl;

architecture Behavioral of UARTCtrl is
type state_type is (idle, load, send, ws);
signal state : state_type;
signal cnt_ws: std_logic_vector (2 downto 0);
signal d_out_reg: std_logic_vector (7 downto 0);

begin

	process(clk, rst)
	begin
		if(rst = '1') then
			d_out_reg <= x"40";
			state <= idle;
			w_start <= '0';
			cnt_ws <= (others => '0');
		else
			if(rising_edge(clk)) then
				case state is
					when idle =>
						d_out_reg <= d_out_reg + 1;
						if d_out_reg = x"5A" then
							d_out_reg <= x"40";
						else
							state <= load;
						end if;
					when load =>
						w_start <= '1';
						state <= ws;
					when ws =>
						cnt_ws <= cnt_ws + 1;
						if cnt_ws = 3 then
							cnt_ws <= (others => '0');
							state <= send;
						end if;
					when others =>
						w_start <= '0';
						if (w_done = '1') then
							state <= idle;
						end if;
				end case;
			end if;	
		end if;
	end process;

	d_out <= d_out_reg;
	
end Behavioral;

