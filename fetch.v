`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:49 01/15/2014 
// Design Name: 
// Module Name:    fetch 
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
module fetch(
input reset,
input triggerIn,				// to decode
output reg [31:0]dataOut,	// to decode
output reg readyOut,			// to decode
input [31:0]dataIn,			// to rom
output reg triggerOut,		// to rom
input readyIn,					// to rom
output reg [31:0]addrOut,	// to rom
input [31:0]pcIn,				// to pc
output reg [31:0]pcOut		// to pc
    );
	 
	 reg [31:0]data;
	 reg [31:0]pc;
	 
	 event resetTrigger;
	 
	 initial fork
	 triggerOut = 0;
	 dataOut = 0;
	 readyOut = 0;
	 pc = 0;
	 pcOut = 0;
	 addrOut = 0;
	 join
	 
	 initial begin
	 #10;
	 forever @(posedge triggerIn or negedge triggerIn or resetTrigger)
	 begin
		readyOut = 0;
		pc = pcIn;
		pcOut = pc+1;
		
		addrOut = pc;
		#1 triggerOut = ~triggerOut;
		#0 wait (readyIn);
//		$display("read time ", $time);
		dataOut = dataIn;
		#1 readyOut = 1;
	 end
	 end
	 
	 always @(reset)
		if (reset) begin
			-> resetTrigger;
		end


endmodule
