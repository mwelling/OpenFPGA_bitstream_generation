module fpga_smiley (
    input       clk,
    output reg [9:0] led
);

reg [17:0] cnt = 0;

always @(posedge clk)
	cnt <= cnt + 1;

always @(cnt)
	case(cnt[17:14])
		 0: led <= 10'b0111111000;
		 1: led <= 10'b1000000100;
		 2: led <= 10'b1010010100;
		 3: led <= 10'b1000000100;
		 4: led <= 10'b1011110100;
		 5: led <= 10'b1001100100;
		 6: led <= 10'b1000000100;
		 7: led <= 10'b0111111000;
		default: led <= 10'b0000000000;
	endcase
endmodule
