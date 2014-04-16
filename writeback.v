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
input reset,					//global
input [31:0]dataIn1,			//alu
input [31:0]dataIn2,			//alu
input [31:0]cpsrIn,			//alu
input [31:0]srcDstIn,		//alu
input readyIn,					//alu
input wIn,						//alu
output reg [31:0]dataOut,	//register bank
output reg [31:0]addrOut,	//register bank
output reg [31:0]cpsrOut,	//register bank
output reg triggerOut,		//alu
output reg triggerOutRB		//register bank
    );
	 
	 reg [31:0]data1;
	 reg [31:0]data2;
	 reg [31:0]cpsr;
	 reg [31:0]srcDst;
	 reg w;
	 reg resetFlag;
	 event resetTrigger;
	 
	 initial fork
		data1 =0;
		data2 =0;
		cpsr =0;
		srcDst =0;
		w =0;
		resetFlag =0;
		dataOut =0;
		addrOut =0;
		cpsrOut =0;
		triggerOut =0;
		triggerOutRB =0;
	 join
	 
	 initial begin
		 #10;
		 @(resetTrigger);
		 forever begin
		 
			if (!resetFlag) begin
//				$display("ran at time ", $time);
				#1 triggerOut = ~triggerOut;
			end
			else resetFlag = 0;
			#0 wait (readyIn);
			
			fork
				data1 = dataIn1;
				data2 = dataIn2;
				cpsr = cpsrIn;
				srcDst = srcDstIn;
				w = wIn;
			join
			
			if(w) begin
				
				cpsrOut = cpsr;
//				$display("In WB, srcDst at time ",$time, " is %b ", srcDst);
				addrOut = srcDst;
				dataOut = data1;
				triggerOutRB = ~triggerOutRB;
				
			end
			
		 end
	 end
	 
	 always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
	 
endmodule
