library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity UARTest is
    Port (  clk : in  STD_LOGIC;
            reset : in  STD_LOGIC;
            rx : in  STD_LOGIC;
            tx : out  STD_LOGIC;
			leds : out std_logic_vector (7 downto 0));
end UARTest;

architecture Behavioral of UARTest is

component Debounce
    Port ( clk : in  STD_LOGIC;
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

component UARTCtrl 
    Port ( 	d_in : in  STD_LOGIC_VECTOR (7 downto 0);
			r_done : in  STD_LOGIC;
			w_done : in  STD_LOGIC;
			clk : in  STD_LOGIC;
			rst : in  STD_LOGIC;
			w_start : out  STD_LOGIC;
			d_out : out  STD_LOGIC_VECTOR (7 downto 0);
			leds : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

signal d_in: STD_LOGIC_VECTOR (7 downto 0);
signal w_start: STD_LOGIC;
signal w_done: STD_LOGIC;
signal r_done_sig: STD_LOGIC;
signal d_out: STD_LOGIC_VECTOR (7 downto 0);
signal r_done: STD_LOGIC;
signal tick: STD_LOGIC;
signal rst: STD_LOGIC;

begin
	
	Debounce_inst: Debounce
    Port map( clk => clk,
                i => reset,
                 o => rst);

	
	UARTReciever_inst: UARTReciever 
	Port map(  	clk => clk,
				rst => rst,
				tick => tick,
				rx => rx,----tx
				d_out => d_in,
				rx_done => r_done);
	
	UARTTransmitter_inst: UARTTransmitter 
    Port map( 	clk => clk,
				rst => rst,
				tick => tick,
				d_in => d_out,
				tx_start => w_start,
				tx_done => w_done,
				tx => tx);

	BaudRateGenerator_inst: BaudRateGenerator 
    Port map( 	clk => clk,
				rst => rst,
				tick => tick);

	UARTCtrl_inst: UARTCtrl 
    Port map( 	d_in  => d_in,
				r_done  => r_done,
				w_done  => w_done,
				clk => clk,
				rst => rst,
				w_start  => w_start,
				d_out  => d_out, 
				leds  => leds);

end Behavioral;

