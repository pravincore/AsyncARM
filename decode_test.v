`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:23:48 02/10/2014
// Design Name:   decode
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/decode_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decode_test;

	// Inputs
	reg reset;
	reg [31:0] dataIn;
	reg readyIn;
	reg triggerIn;
	reg readyInRB;
	reg [31:0]dataInRB;

	// Outputs
	wire [31:0] dataOut1;
	wire [31:0] dataOut2;
	wire [31:0] dataOut3;
	wire [31:0] dataOut4;
	wire [3:0] typeOut;
	wire readyOut;
	wire triggerOut;
	wire [31:0]addrRB;
	wire triggerOutRB;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.reset(reset), 
		.dataIn(dataIn), 
		.readyIn(readyIn), 
		.triggerIn(triggerIn), 
		.dataOut1(dataOut1), 
		.dataOut2(dataOut2), 
		.dataOut3(dataOut3), 
		.dataOut4(dataOut4), 
		.typeOut(typeOut), 
		.readyOut(readyOut), 
		.triggerOut(triggerOut), 
		.readyInRB(readyInRB), 
		.dataInRB(dataInRB), 
		.addrRB(addrRB), 
		.triggerOutRB(triggerOutRB)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		dataIn = 0;
		readyIn = 0;
		triggerIn = 0;
		readyInRB = 0;
		dataInRB = 0;

		// Wait 100 ns for global reset to finish
		#100;
		  
		  dataIn = 32'b1110_000_1101_0_0000_0000_0000_11111111;
		  readyIn = 1;
		  triggerIn = ~triggerIn;
		  @(posedge triggerOutRB or negedge triggerOutRB);
		  dataInRB = 8'hf0;
		  readyInRB = 1;
		  
		  #50 $finish;
		// Add stimulus here

	end
      
endmodule

