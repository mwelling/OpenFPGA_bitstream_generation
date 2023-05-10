//-------------------------------------------
//	FPGA Synthesizable Verilog Netlist
//	Description: Netlist Summary
//	Author: Xifan TANG
//	Organization: University of Utah
//	Date: Thu Mar 30 13:45:43 2023
//-------------------------------------------
//----- Time scale -----
`timescale 1ns / 1ps

// ------ Include fabric top-level netlists -----
`include "./SRC/fabric_netlists.v"

`include "decoder_3_to_8_output_verilog.v"

`include "./SRC/decoder_3_to_8_autocheck_top_tb.v"
