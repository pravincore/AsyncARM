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
///////////////////////////////////////////////////////////////////////////////////
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
//	 mem[0] = 0;
//	 mem[1] = 1;
//	 mem[2] = 2;
//	 mem[3] = 3;
//	 mem[4] = 4;
//	 mem[5] = 5;
//	 mem[6] = 6;
//	 mem[7] = 7;
//	 mem[8] = 8;
//	 mem[9] = 9;
//	 mem[10] = 10;
//	 mem[11] = 11;
//	 mem[12] = 12;
//	 mem[13] = 13;
//	 mem[14] = 14;
//	 mem[15] = 15;
	 
	 mem[0] = 0;
	 mem[1] = 0;
	 mem[2] = 0;
	 mem[3] = 0;
	 mem[4] = 0;
	 mem[5] = 0;
	 mem[6] = 0;
	 mem[7] = 0;
	 mem[8] = 0;
	 mem[9] = 0;
	 mem[10] =0;
	 mem[11] =0;
	 mem[12] =0;
	 mem[13] =0;
	 mem[14] =0;
	 mem[15] =0;
	 
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
	
	//////////////////////////////// debugging ////////////////////////
	
	initial $monitor("In RGB, r1=%d, r2=%d, r3=%d, r4=%d, r5=%d", mem[1],mem[2],mem[3],mem[4],mem[5]," at time ", $time);
	 
endmodule
