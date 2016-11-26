############################
# On-board LED             #
############################
set_property PACKAGE_PIN Y11 [get_ports rx]
set_property IOSTANDARD LVCMOS33 [get_ports rx]
set_property PACKAGE_PIN AA11 [get_ports tx]
set_property IOSTANDARD LVCMOS33 [get_ports tx]

set_property PACKAGE_PIN T22 [get_ports leds[0]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[0]]
set_property PACKAGE_PIN T21 [get_ports leds[1]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[1]]
set_property PACKAGE_PIN U22 [get_ports leds[2]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[2]]
set_property PACKAGE_PIN U21 [get_ports leds[3]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[3]]
set_property PACKAGE_PIN V22 [get_ports leds[4]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[4]]
set_property PACKAGE_PIN W22 [get_ports leds[5]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[5]]
set_property PACKAGE_PIN U19 [get_ports leds[6]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[6]]
set_property PACKAGE_PIN U14 [get_ports leds[7]]
set_property IOSTANDARD LVCMOS33 [get_ports leds[7]]

set_property PACKAGE_PIN P16 [get_ports reset]
set_property IOSTANDARD LVCMOS33 [get_ports reset]

# CLK source 100 MHz
set_property PACKAGE_PIN Y9 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]



