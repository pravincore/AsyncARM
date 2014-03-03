`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:22 01/24/2014 
// Design Name: 
// Module Name:    regbanknpc 
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
module regbank(
input triggerInr,				// decoder
input triggerInw,				// writeback
input [31:0]dataIn,			// writeback
input [3:0]addrr,				// decoder
input [3:0]addrw,				// writeback
output reg readyOut,			// decoder
output reg [31:0]dataOut,	// decoder
input [31:0]pcIn,				// fetch
output reg [31:0]pcOut,		// fetch
output reg [31:0]cpsrOut,	// issue
input [31:0]cpsrIn
    );
	 
	 reg [31:0]mem[15:0];
	 reg [31:0]cpsr;
	 
	 initial begin
	 // for simulation only
	 mem[0] = 1;
	 mem[1] = 2;
	 mem[2] = 3;
	 mem[3] = 4;
	 mem[4] = 5;
	 mem[5] = 6;
	 mem[6] = 7;
	 mem[7] = 8;
	 mem[8] = 9;
	 mem[9] = 10;
	 
	 cpsr = 0;
	 cpsrOut =0;
	 readyOut = 0;
	 dataOut = 0;
	 pcOut = 0;
	 end
	 ////////////////////////////// Core registers ////////////////////
	 initial begin
		#10;
		forever @(posedge triggerInr or negedge triggerInr)
		begin
			readyOut = 0; 
			#1;
			dataOut = mem[addrr];
			readyOut = 1;
		end
	 end
	 
	 initial begin
		#10;
		forever @(posedge triggerInw or negedge triggerInw)
		begin
			mem[addrw] = dataIn;
		end
	 end
	 ///////////////////////////////////////////////////////////////////
	 
	 // cpsr out for the issuer
	 
	 always @(cpsrIn) begin
		fork
			cpsrOut = cpsrIn;
			cpsr = cpsrIn;
		join
	 end
	 
	 // pc
	 initial begin
		#10;
		forever @(pcIn)
		begin
			mem[15] = pcIn;
		end
	 end
	 always @(mem[15])
		pcOut = mem[15];
	 
endmodule
