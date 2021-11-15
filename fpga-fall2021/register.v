module register(
	input clk, we, oe, in,
	output out
);

reg memory;

always @(posedge clk) begin
	if (we) memory <= in;
end

assign out = oe ? memory : 1'b0;

endmodule
