library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity BaudRateGenerator is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           tick : out  STD_LOGIC);
end BaudRateGenerator;

architecture Behavioral of BaudRateGenerator is

signal cnt : std_logic_vector (5 downto 0);

begin
	
	process (clk, rst)
	begin
		if(rst = '1') then
			cnt <= "000000";
			tick <= '0'; 
		else
			if (clk'event and clk = '1') then
				cnt <= cnt + 1;					
				if cnt = 60	then
					tick <= '1'; 
				elsif cnt = 61 then
					cnt <= "000000";
				else
					if cnt = 3 then
						tick <= '0';
					end if;
				end if;
			end if;
		end if;
	end process;
	
end Behavioral;

