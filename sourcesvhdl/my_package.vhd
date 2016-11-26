LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

PACKAGE my_package IS
  
  -----------------------------FUNCTIONS--------------------------------  
 
  -----------------------------BRAM_ARRAY--------------------------------  
  
	component SendCommand 
    Port ( 	clk : in std_logic;
				rst : in std_logic;
				start: in std_logic;
				cmd : in std_logic_vector (0 to 47);
				tick: in std_logic;
				tx : out std_logic;
				cmdsent : out std_logic
			);
	  end component ;

	 component ReceiveCommand 
    Port ( 	clk : in std_logic;
				rst : in std_logic;
				start: in std_logic;
				tick: in std_logic;
				rx : in std_logic;
				cmdreceived : out std_logic;
				cmd : out std_logic_vector (0 to 47)
			);
		end component ;
		
		component led7seg 
		generic ( refresh_counts: integer := 1000 );
		port(	clk: in std_logic;
					rst: in std_logic;
					zeros: in std_logic;
					off: in std_logic;
					start: in std_logic;
					stop: in std_logic;
					data: in std_logic_vector(15 downto 0);
					sign: in std_logic;
					dp:out std_logic;
					segments: out std_logic_vector(6 downto 0);
					anodes: out std_logic_vector(3 downto 0));
		end component;

		component Debounce
				Port ( 	clk : in  STD_LOGIC;
						i : in  STD_LOGIC;
						o : out  STD_LOGIC);
		end component;

		component UARTReciever 
				Port (  clk : in  STD_LOGIC;
				        rst : in  STD_LOGIC;
				        tick : in  STD_LOGIC;
				        rx : in  STD_LOGIC;
				        d_out : out  STD_LOGIC_VECTOR (7 downto 0);
				        rx_done : out  STD_LOGIC);
		end component;

		component UARTTransmitter 
				Port ( clk : in STD_LOGIC;
				       rst : in STD_LOGIC;
				       tick : in STD_LOGIC;
				       d_in : in STD_LOGIC_VECTOR (7 downto 0);
				       tx_start : in STD_LOGIC;
				       tx_done : out STD_LOGIC;
				       tx : out STD_LOGIC);
		end component;


		component BaudRateGenerator 
				Port ( clk : in  STD_LOGIC;
				       rst : in  STD_LOGIC;
				       tick : out  STD_LOGIC);
		end component;

END MY_PACKAGE;

PACKAGE BODY MY_PACKAGE IS


END MY_PACKAGE;



 
