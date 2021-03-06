`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:59 01/15/2014 
// Design Name: 
// Module Name:    issuer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*Thoughts:
I wanted to initialize registers but now I feel it isn't required
since data transfers to next stage through protocol, no fear of junk propogation.
Then again, we better initialize or the value of triggers will remain
unknow throughout the simulation and seems deciplined to do so.

One interesting thing i found out is http://testbench.in/VT_07_PROCEDURAL_TIMING_CONTROLS.html
Science of deduction Sherlock, indeed it is. Isn't life full of wonders with
plenty of mysterious debugging to be done ;) :)
Guess what, you can't put an always inside initial but forever can be put inside

*/
///////////////////////// issuer code begins here ////////////////////////////////
module issuer(
input reset,
input readyIn,					// fetch
input [31:0]dataIn,			// fetch
output reg triggerOut,		// fetch
input triggerIn,				// decode
output reg readyOut,			// decode
output reg [31:0]dataOut,	// decode
input [31:0]cpsr				// regbank
    );
	 
	 reg [31:0]data;
	 reg [3:0]cond;
	 event resetTrigger;
	 event issueFailTrigger;
	 event issueFail;
	 integer resetFlag;
	 
	 initial
	 begin
	 
	 fork						// Initialization forked out to speed up global reset
	 data = 0;
	 dataOut = 0;
	 cond = 0;
	 triggerOut =0;
	 readyOut = 0;
	 resetFlag = 0;
	 join
	 
	 end

	 initial begin
	 #10; // This is to make the design insensitive to initialization edges
	 // Almost took 24hrs to debug this one ! SH pushed me to do it !
	 forever @(posedge triggerIn or negedge triggerIn or resetTrigger or issueFailTrigger)
	 begin
//		$display("Issuer ran with cpsr %h", cpsr," and data %h", dataIn," at ", $time);
		
		readyOut = 0;
		if (!resetFlag) triggerOut = ~triggerOut;
		else resetFlag = 0;
		#0 wait (readyIn);
		data = dataIn;
		cond = dataIn[31:28];
		
		if((cond == 4'b0000) && (cpsr[30] == 1'b1)			// z = 1 for EQ
		|| (cond == 4'b0001) && (cpsr[30] == 1'b0)	// z = 0 for NEQ
		|| (cond == 4'b0010) && (cpsr[29] == 1'b1)
		|| (cond == 4'b0011) && (cpsr[29] == 1'b0)
		|| (cond == 4'b0100) && (cpsr[31] == 1'b1)
		|| (cond == 4'b0101) && (cpsr[31] == 1'b0)
		|| (cond == 4'b0110) && (cpsr[28] == 1'b1)
		|| (cond == 4'b0111) && (cpsr[28] == 1'b0)
      || (cond == 4'b1000) && (cpsr[29] == 1'b1) && (cpsr[30] == 1'b0)
		|| (cond == 4'b1001) && (cpsr[29] == 1'b0) && (cpsr[30] == 1'b1)
		|| (cond == 4'b1010) && (cpsr[31] == cpsr[28])
		|| (cond == 4'b1011) && (cpsr[31] != cpsr[28])
      || (cond == 4'b1100) && (cpsr[30] == 1'b0) && (cpsr[31] == cpsr[28])
		|| (cond == 4'b1101) && ((cpsr[30] == 1'b1) || (cpsr[31] != cpsr[28]))
		|| (cond == 4'b1110))
		begin					// Instruction issued !
			dataOut = data; // computation delay modelled
			// dataOut setup time
			#1 readyOut = 1;
		end
		else begin			// Instruction not issued !
			-> issueFail;
			
		end
		
	 end 
	 end
	 
	 always@(issueFail)
		#1 -> issueFailTrigger;
	 
	 always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
		
//	always @(posedge triggerIn or negedge triggerIn) $display ("triggerIn edge at ",$time);
//	always @(resetTrigger) $display ("resetTrigger at ",$time);
	 
endmodule
