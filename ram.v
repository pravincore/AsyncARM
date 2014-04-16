`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:16 04/15/2014 
// Design Name: 
// Module Name:    ram 
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
module ram(
input [31:0]dataIn,
output reg [31:0]dataOut,
input [31:0]addrIn,
input rwIn,
input triggerIn,
output reg readyOut
    );
	 
	 reg [7:0]mem[1023:0]; // 1KB ram for now
	 reg [31:0]data;
	 reg [31:0]addr;
	 reg rw;
	 
	 initial fork
		readyOut = 0;
		data = 0;
		dataOut = 0;
		addr = 0;
		rw = 0;
	 join
	 
	 initial begin
	 #10;
		forever @(posedge triggerIn or negedge triggerIn) begin
			readyOut = 0;
			data = dataIn;
			addr = addrIn;
			rw = rwIn;
			#1;
			if (rw == 0) begin	// read from ram
				dataOut[7:0] 	= mem[addr];
				dataOut[15:8]	= mem[addr+1];
				dataOut[23:16] = mem[addr+2];
				dataOut[31:24]	= mem[addr+3];
			end
			else begin				// write to ram
				mem[addr]	= data[7:0];
				mem[addr+1]	= data[15:8];
				mem[addr+2]	= data[23:16];
				mem[addr+3]	= data[31:24];
			end
			
			readyOut = 1;
			
		end
	 end
	 
	 
endmodule
