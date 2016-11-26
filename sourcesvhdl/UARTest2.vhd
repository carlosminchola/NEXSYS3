library ieee; 
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity UARTest1 is
    Port (  clk : in  STD_LOGIC;
            reset : in  STD_LOGIC;
            rx : in  STD_LOGIC;
            tx : out  STD_LOGIC;
			load  : in  STD_LOGIC;
			segments: out STD_LOGIC_VECTOR(6 DOWNTO 0);
			anodes: out STD_LOGIC_VECTOR(3 DOWNTO 0);
			dp: out STD_LOGIC
			);
end UARTest1;

architecture Behavioral of UARTest1 is

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

component UARTCtrl 
    Port ( 	w_done : in  STD_LOGIC;
				clk : in  STD_LOGIC;
				rst : in  STD_LOGIC;
				w_start : out  STD_LOGIC;
				d_out : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

type matrix is array(0 to 25) of STD_LOGIC_VECTOR (7 downto 0);
signal array_char: matrix;
signal d_in: STD_LOGIC_VECTOR (7 downto 0);
signal w_start: STD_LOGIC;
signal w_done: STD_LOGIC;
signal d_out: STD_LOGIC_VECTOR (7 downto 0);
signal r_done: STD_LOGIC;
signal tick: STD_LOGIC;
signal rst: STD_LOGIC;
signal r_load: STD_LOGIC;
signal i:  NATURAL RANGE 0 TO 31;
signal j:  NATURAL RANGE 0 TO 31;
signal display: STD_LOGIC_VECTOR (15 downto 0); 
signal state_button: INTEGER range 0 to 1;
signal state_done: INTEGER range 0 to 1;

begin
	
	Debounce_inst0: Debounce
    Port map( 	clk => clk,
                i => reset,
                o => rst);
	
	Debounce_inst1: Debounce
    Port map( 	clk => clk,
                i => load,
                o => r_load);	

--	r_load <= load;
--	rst <= reset;
	
	UARTReciever_inst: UARTReciever 
	Port map(  	clk => clk,
				rst => rst,
				tick => tick,
				rx => rx,
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
    Port map(   w_done  => w_done,
				clk => clk,
				rst => rst,
				w_start  => w_start,
				d_out  => d_out);

	Led7seg_inst: Led7seg 
	Generic map(refresh_counts => 100000) 
	Port map( 	rst => rst, 
				clk=> clk, 
				zeros=> '0', 
				off=> '0', 
				start => '1', 
				stop => '0', 
				data => display, 
				sign => '0',
				dp => dp, 
				anodes=> anodes, 
				segments=> segments);
				
	process (clk, rst)
	begin
		if (rst = '1') then
			i <= 0;
			state_button <= 0;
			j <= 0;
			display <= (others => '0');
			state_done <= 0;
		else
			if (clk'event and clk = '1') then
				case state_done is
					when 0 =>
						if r_done = '1' then
							state_done <= 1;
							array_char(i) <= d_in;
							if i > 24 then
								i <= 0;
							else
								i <= i + 1;
							end if;
						end if;
					when 1 =>
						if r_done = '0' then
							state_done <= 0;
						end if;
				end case;

				case state_button is
					when 0 =>
						if r_load = '1' then
							display <= array_char(j) & array_char(j);
							state_button <= 1;
							if j > 24 then
								j <= 0;
							else
								j <= j + 1;
							end if;
						end if;
					when 1 =>
						if r_load = '0' then
							state_button <= 0;
						end if;
				end case;
			end if;
		end if;
	end process;
	
end Behavioral;

