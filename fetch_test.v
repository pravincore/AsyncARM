`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:44:36 02/06/2014
// Design Name:   fetch
// Module Name:   /home/pravinkumar/Workspace/Xilinx/AsyncARM/fetch_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fetch_test;

	// Inputs
	reg triggerIn;
	reg [31:0] dataIn;
	reg readyIn;
	reg [31:0] pcIn;

	// Outputs
	wire [31:0] dataOut;
	wire readyOut;
	wire triggerOut;
	wire [31:0] addrOut;
	wire [31:0] pcOut;

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.triggerIn(triggerIn), 
		.dataOut(dataOut), 
		.readyOut(readyOut), 
		.dataIn(dataIn), 
		.triggerOut(triggerOut), 
		.readyIn(readyIn), 
		.addrOut(addrOut), 
		.pcIn(pcIn), 
		.pcOut(pcOut)
	);

	initial begin
		// Initialize Inputs
		triggerIn = 0;
		dataIn = 0;
		readyIn = 0;
		pcIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut);
		dataIn = 255;
		#1 readyIn = 1;
        
		#100 $finish;
		// Add stimulus here

	end
      
endmodule

