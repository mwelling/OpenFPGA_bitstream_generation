module fpga_pwm8 (
    input       clk,
    input [7:0] duty,
    output      pwm
);

reg [7:0]   cnt = 0;

always @(posedge clk)
	cnt <= cnt + 1;

assign pwm = (cnt < duty) ? 1 : 0;

endmodule
