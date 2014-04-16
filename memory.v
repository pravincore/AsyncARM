`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:09:36 04/15/2014 
// Design Name: 
// Module Name:    memory 
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
module memory(
input reset,					//global
input [31:0]dataIn1,			//alu
input [31:0]dataIn2,			//alu
input [31:0]cpsrIn,			//alu
input wIn,						//alu
input mIn,						//alu
input [31:0]srcDstIn,		//alu
input readyIn,					//alu
output reg triggerOut,		//alu
input triggerIn,				//writeback
output reg readyOut,			//writeback
output reg [31:0]dataOut1,	//writeback
output reg [31:0]dataOut2,	//writeback
output reg [31:0]cpsrOut,	//writeback
output reg [31:0]srcDstOut,//writeback
output reg wOut,				//writeback
output reg [31:0]dataOutRM,//ram
output reg [31:0]addrOutRM,//ram
output reg rwOut,				//ram
output reg triggerOutRM,	//ram
input [31:0]dataInRM,		//ram
input readyInRM				//ram
    );
	 
	 reg [31:0]data1;
	 reg [31:0]data2;
	 reg [31:0]srcDst;
	 reg m;
 	 event resetTrigger;
	 integer resetFlag;
	 
	 initial fork
	 triggerOut =0;
	 readyOut =0;
	 dataOut1 =0;
	 dataOut2 =0;
	 cpsrOut =0;
	 srcDstOut =0;
	 dataOutRM =0;
	 addrOutRM =0;
	 rwOut =0;
	 wOut =0;
	 triggerOutRM =0;
	 resetFlag =0;
	 m =0;
	 data1 =0;
	 data2 =0;
	 srcDst =0;
	 join
	 
	 initial begin
	 #10;
		forever@(posedge triggerIn or negedge triggerIn or resetTrigger) begin
			$display("In MEM, ran main loop at time ",$time);
			readyOut = 0;
			if (!resetFlag) triggerOut = ~triggerOut;
			else resetFlag = 0;
			#0 wait (readyIn);
			
			cpsrOut = cpsrIn;
			srcDstOut = srcDstOut;
			wOut = wIn;
			m = mIn;
			data1 = dataIn1;
			data2 = dataIn2;
			srcDst = srcDstIn;
			
			if(m) begin
				if(dataIn1) begin			// load
					addrOutRM = data2;
					rwOut = 0;
					triggerOutRM = ~triggerOutRM;
					wait (readyInRM) #0;
					dataOut1 = dataInRM;
				end
				else begin					// store
					$display("In MEM, ran store at", $time);
					addrOutRM = srcDst;
					rwOut = 1;
					dataOutRM = data2;
					triggerOutRM = ~triggerOutRM;
				end
			end
			else begin
			dataOut1 = data1;
			end
			
			#1 readyOut = 1;
			
		end
	 end
	 
	 always @(reset)
		if (reset) begin
			$display("In MEM, ran reset trigger at time ",$time);
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
	 
endmodule
