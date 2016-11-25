# ZedBoard xdc
# define clock and period
create_clock -period 10.000 -name clk -waveform {0.000 5.000} [get_ports clk]

# Create a virual clock for IO constraints
create_clock -period 10.0 -name virtual_clock

# input delay
set_input_delay -clock clk 0 [get_ports rx]
set_input_delay -clock clk -min -0.5 [get_ports rx]




set_input_delay -clock virtual_clock -max 0.0 [get_ports reset]
set_input_delay -clock virtual_clock -min -0.5 [get_ports reset]

#output delay
set_output_delay -clock virtual_clock 0 [get_ports leds[*]]

set_output_delay -clock virtual_clock 0 [get_ports tx]
