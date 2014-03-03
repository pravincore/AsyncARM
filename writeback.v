`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:59 01/31/2014 
// Design Name: 
// Module Name:    writeback 
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
module writeback(
input reset,
input [31:0]dataIn1,
input [31:0]dataIn2,
input [31:0]cpsrIn,
input [31:0]srcDstIn,
input readyIn,
input w,
output reg [31:0]dataOut,
output reg [3:0]addrOut,
output reg [31:0]cpsrOut,
output reg triggerOut,
output reg triggerOutRB
    );
	 
	 
	 reg resetFlag;
	 event resetTrigger;
	 
	 initial fork
		resetFlag =0;
		dataOut =0;
		addrOut =0;
		triggerOut =0;
		triggerOutRB =0;
	 join
	 
	 initial begin
		 #10;
		 @(resetTrigger);
		 forever begin
		 
			if (!resetFlag) #1 triggerOut = ~triggerOut;
			else resetFlag = 0;
			#0 wait (readyIn);
			
		 end
	 end
	 
	 always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
	 
endmodule
