library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity UARTTransmitter is
    Port ( clk : in STD_LOGIC;
           rst : in STD_LOGIC;
           tick : in STD_LOGIC;
           d_in : in STD_LOGIC_VECTOR (7 downto 0);
           tx_start : in STD_LOGIC;
           tx_done : out STD_LOGIC;
           tx : out STD_LOGIC);
end UARTTransmitter;

architecture Behavioral of UARTTransmitter is

type state_type is (idle, start, data, stop, ws, waiting_low_tick);
signal state, old_state : state_type;
signal tick_counter : std_logic_vector(3 downto 0);
signal bit_counter : std_logic_vector(2 downto 0);
signal cnt_ws : std_logic_vector(1 downto 0);
signal reg : std_logic_vector (7 downto 0);
signal tx_reg : std_logic;
constant cnt_tick: natural:= 13;

begin
	
	process (clk, rst)
	begin
		if (rst = '1') then
			state <= idle;
			tick_counter <= (others => '0');
			bit_counter <= (others => '0');
			reg <= (others => '0');
			cnt_ws <= (others => '0');
			tx_reg <= '1';
			old_state <= start;
		else
			if (rising_edge(clk)) then
				case state is
					when idle =>
						tx_done <= '0';
						tx_reg <= '1';
						if(tx_start = '1') then
							state <= start;
							tick_counter <= "0000";
							reg <= d_in;
						end if;
					when start =>
						tx_reg <= '0';
						if(tick = '1') then
							old_state <= start;
							state <= waiting_low_tick;
							if (tick_counter < cnt_tick) then
								tick_counter <= tick_counter + 1;
							else
								tick_counter <= "0000";
								bit_counter <= "000";
								state <= data;
							end if;
						end if;
					when data =>
						tx_reg <= reg(0);
						if(tick = '1') then
							old_state <= data;
							state <= waiting_low_tick;
							if(tick_counter < cnt_tick) then
								tick_counter <= tick_counter + 1;
							else
								tick_counter <= "0000";
								reg <= '0' & reg(7 downto 1);
								if (bit_counter = 7) then
									state <= stop;
								else
									bit_counter <= bit_counter + 1;
								end if;
							end if;
						end if;
					when stop =>
						tx_reg <= '1';
						if(tick = '1') then
							old_state <= stop;
							state <= waiting_low_tick;
							if(tick_counter < cnt_tick) then
								tick_counter <= tick_counter + 1;
							else
								state <= ws;
								tx_done <= '1';
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
	
	tx <= tx_reg;

end Behavioral;

