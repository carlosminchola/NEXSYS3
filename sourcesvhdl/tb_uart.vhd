
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;



ENTITY tb_UARTest1 IS
END tb_UARTest1;

ARCHITECTURE behavior OF tb_UARTest1 IS 
 
component UARTest1 
    Port (  clk : in  STD_LOGIC;
            reset : in  STD_LOGIC;
           rx : in  STD_LOGIC;
            tx : out  STD_LOGIC;
			load  : in  STD_LOGIC;
			segments: out STD_LOGIC_VECTOR(6 DOWNTO 0);
			anodes: out STD_LOGIC_VECTOR(3 DOWNTO 0);
			dp: out STD_LOGIC
			);
end component;
    

  signal clk : STD_LOGIC;
  signal reset : STD_LOGIC;
  signal rx : STD_LOGIC;
  signal tx : STD_LOGIC;
	signal load  : STD_LOGIC;
	signal segments: STD_LOGIC_VECTOR(6 DOWNTO 0);
	signal anodes: STD_LOGIC_VECTOR(3 DOWNTO 0);
	signal dp: STD_LOGIC;

	signal test : integer := 0;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
   
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
    uut: UARTest1   Port map(  clk => clk,
            reset => reset,
           rx  => tx,
            tx  => tx,
			load   => load,
			segments => segments ,
			anodes => anodes,
			dp => dp
			);


   clk_process :process
   begin
		clk <= '0';
	
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   stim_proc: process
     
  begin						 
		reset <='1';
		load <= '0';
		wait for 4*clk_period;
		reset <= '0';
		wait;
	end process;
	
	

END;
