library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity Debounce is
    Port ( clk : in  STD_LOGIC;
           i : in  STD_LOGIC;
           o : out  STD_LOGIC);
end Debounce;

architecture Behavioral of Debounce is
	signal c : std_logic_vector(23 downto 0);
begin
	process(clk)
	begin
		if rising_edge(clk) then
		    if i = '1' then
				if c = x"ffffff" then
					o <= '1';
				else
					o <= '0';
				end if;
				c <= c+1;
			else
				c <= (others => '0');
				o <= '0';
			end if;
		end if;
	end process;

end Behavioral;

