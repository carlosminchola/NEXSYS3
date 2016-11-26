library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity UARTReciever is
    Port (  clk : in  STD_LOGIC;
            rst : in  STD_LOGIC;
            tick : in  STD_LOGIC;
            rx : in  STD_LOGIC;
            d_out : out  STD_LOGIC_VECTOR (7 downto 0);
            rx_done : out  STD_LOGIC);
end UARTReciever;

architecture Behavioral of UARTReciever is

type state_type is (idle, start, data, stop, ws, waiting_low_tick);
signal state, old_state : state_type;
signal tick_counter : std_logic_vector (3 downto 0);
signal bit_counter : std_logic_vector(2 downto 0);
signal cnt_ws : std_logic_vector(1 downto 0);
signal reg : std_logic_vector (7 downto 0);
constant cnt_tick : natural:= 13;

begin
	
	process (clk, rst)
	begin
		if (rst = '1') then
			rx_done <= '0';
			state <= idle;
			tick_counter <= "0000";
			bit_counter <= "000";
			reg <= (others => '0');
			cnt_ws <= (others => '0');
			old_state <= start;
		else
			if (clk'event and clk = '1') then
				case state is
					when idle =>
						rx_done <= '0';
						if(rx = '0') then
							state <= start;
							tick_counter <= "0000";
						end if;
					when start =>
						if(tick = '1') then
							old_state <= start;
							state <= waiting_low_tick;
							if(tick_counter < cnt_tick/2) then --/2
								tick_counter <= tick_counter + 1;
							else
								tick_counter <= "0000";
								bit_counter <= "000";
								state <= data;
							end if;
						end if;
					when data =>
						if(tick = '1') then
							old_state <= data;
							state <= waiting_low_tick;
							if(tick_counter < cnt_tick) then
								tick_counter <= tick_counter + 1;
							else
								tick_counter <= "0000";
								reg <= rx & reg (7 downto 1);
								if (bit_counter = 7) then
									state <= stop;
								else
									bit_counter <= bit_counter + 1;
								end if;
							end if;
						end if;
					when stop =>
						if(tick = '1') then
							old_state <= stop;
							state <= waiting_low_tick;
							if(tick_counter < cnt_tick) then
								tick_counter <= tick_counter + 1;
							else
								state <= ws;
								rx_done <= '1';
							end if;
						end if;
					when waiting_low_tick =>	
						if(tick = '0') then
							state <= old_state;
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
	d_out <= reg;
end Behavioral;

