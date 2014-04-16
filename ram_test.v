`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:22:38 04/15/2014
// Design Name:   ram
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/ram_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ram_test;

	// Inputs
	reg [31:0] dataIn;
	reg [31:0] addrIn;
	reg rwIn;
	reg triggerIn;

	// Outputs
	wire [31:0] dataOut;
	wire readyOut;

	// Instantiate the Unit Under Test (UUT)
	ram uut (
		.dataIn(dataIn), 
		.dataOut(dataOut), 
		.addrIn(addrIn), 
		.rwIn(rwIn), 
		.triggerIn(triggerIn), 
		.readyOut(readyOut)
	);

	initial begin
		// Initialize Inputs
		dataIn = 0;
		addrIn = 0;
		rwIn = 0;
		triggerIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        addrIn = 2;
		  rwIn = 1;
		  dataIn = 31;
		  triggerIn = ~triggerIn;
		  
		  wait(readyOut) #0;
		  
		  addrIn = 2;
		  rwIn = 0;
		  triggerIn = ~triggerIn;
		  
		// Add stimulus here
		#50 $finish;

	end
      
endmodule

