`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:47 01/12/2014 
// Design Name: 
// Module Name:    rom 
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
module rom(
input [31:0]addr,			//
output reg [31:0]data,	//		To
input triggerIn,			//		Fetch
output reg readyOut		//
    );

	reg [31:0]mem[1048576:0]; // I have currently allocated 4MB of romspace for simulation

	initial
	begin
		$readmemh("test.bin.exa",mem);
		readyOut = 0;
		data = 0;
	end

	initial begin
	#10; // ignoring global reset edges
		forever @(posedge triggerIn or negedge triggerIn)
		begin
			readyOut = 0;
			data = mem[addr];
			#1 readyOut = 1; // hold ( it ;):D) )
		end
	end

endmodule

