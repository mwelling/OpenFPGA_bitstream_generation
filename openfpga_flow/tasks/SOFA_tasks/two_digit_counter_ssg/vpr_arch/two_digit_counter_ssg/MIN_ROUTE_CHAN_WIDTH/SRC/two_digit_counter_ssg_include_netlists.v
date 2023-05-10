//-------------------------------------------
//	FPGA Synthesizable Verilog Netlist
//	Description: Netlist Summary
//	Author: Xifan TANG
//	Organization: University of Utah
//	Date: Tue May  9 14:41:34 2023
//-------------------------------------------
//----- Time scale -----
`timescale 1ns / 1ps

// ------ Include fabric top-level netlists -----
`include "./SRC/fabric_netlists.v"

`include "two_digit_counter_ssg_output_verilog.v"

`include "./SRC/two_digit_counter_ssg_autocheck_top_tb.v"
