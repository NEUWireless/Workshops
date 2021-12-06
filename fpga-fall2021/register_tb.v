`include "register.v"
module eateremu_tb;

reg clk, we, oe, in;
wire out;

register r(
	.clk(clk),
	.we(we),
	.oe(oe),
	.in(in),
	.out(out)
);

initial begin
    #0 clk=0; we=0; oe=0; in=0;
	#1 clk=1;
    forever #1 clk=!clk;
end

initial begin
	$dumpfile("wave.vcd");
	$dumpvars(0, clk, we, oe, in, out);
	$monitor("clk=%d we=%d oe=%d in=%d out=%d", clk, we, oe, in, out);
	#1 we=1; in=1;
	#1 oe=1;
	#1 in=0;
	#1 $finish;
	$dumpfile("dump.vcd");
end

endmodule
