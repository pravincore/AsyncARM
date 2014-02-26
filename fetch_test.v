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
	wire [31:0] dataIn;
	wire readyIn;
	wire [31:0] pcIn;
	reg reset;

	// Outputs
	wire [31:0] dataOut;
	wire readyOut;
	wire triggerOut;
	wire [31:0] addrOut;
	wire [31:0] pcOut;
	
	// other wires
//	wire [31:0]cpsr_irg;
	

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.reset(reset),
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
	//////////////////////////////////////
	
	rom rom1(
	 .addr(addrOut),
	 .data(dataIn),
	 .triggerIn(triggerOut),
	 .readyOut(readyIn)
	 );
	
	//////////////////////////////////////
	
	regbank regb (
		.pcIn(pcOut),
		.pcOut(pcIn),
		.cpsrOut(cpsr)
	);
	
	///////////////////////////////////////
//	
//	issuer issue(
//	.readyIn(readyOut),
//	.dataIn(dataOut),
//	.triggeOut(triggerIn),
//	.triggerIn(),
//	.dataOut(),
//	.readyOut(),
//	.cpsr(cpsr)
//	);
	
	///////////////////////////////////////

	initial begin
		// Initialize Inputs
		triggerIn = 0;
		reset = 0;
//		dataIn = 0;
//		readyIn = 0;
//		pcIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		
		wait (readyOut) triggerIn = ~triggerIn;
		#0;
		wait (readyOut) triggerIn = ~triggerIn;
		#0;
		wait (readyOut) triggerIn = ~triggerIn;
		
//		wait (readyOut) #1; triggerIn = ~triggerIn;
//		
//		wait (readyOut) #1; triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut);
//		dataIn = 255;888888888888888888
//		#1 readyIn = 1;
      
		#50 $finish;
		// Add stimulus here

	end
      
endmodule
