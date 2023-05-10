/////////////////////////////////////////
//  Functionality: 2-input AND with clocked 
//                 and combinational outputs 
//  Author:        Xifan Tang
////////////////////////////////////////

`timescale 1ns / 1ps

module and2_latch(
  a,
  b,
  clk,
  rst,
  c,
  d);

input wire clk;
input wire rst;

input wire a;
input wire b;
output wire c;
output reg d;

assign c = a & b;

always @(posedge rst or posedge clk) begin
  if(rst == 1'b1)
    d<=0;
  else 
    d <= c;
end

endmodule
