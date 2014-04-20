`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:26 04/20/2014
// Design Name:   cpu
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/cpu_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_test;

	/////////////// global reset //////////////
	reg reset;
	///////////////////////////////////////////
	
	//////////////// ROM interface ////////////
	wire [31:0] addr_rf;
	wire trigger_rf;
	wire [31:0] data_rf;
	wire ready_rf;

	//////////////// RAM interface ////////////
	wire [31:0] dataOutRM;
	wire [31:0] addrOutRM;
	wire rwOutRM;
	wire triggerOutRM;
	wire [31:0] dataInRM;
	wire readyInRM;
	
	
	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.reset(reset), 
		.addr_rf(addr_rf), 
		.trigger_rf(trigger_rf), 
		.data_rf(data_rf), 
		.ready_rf(ready_rf), 
		.dataOutRM(dataOutRM), 
		.addrOutRM(addrOutRM), 
		.rwOutRM(rwOutRM), 
		.triggerOutRM(triggerOutRM), 
		.dataInRM(dataInRM), 
		.readyInRM(readyInRM)
	);
	
	////////////////////// ROM ////////////////////////
	
	rom rom1(
	 .addr(addr_rf),
	 .data(data_rf),
	 .triggerIn(trigger_rf),
	 .readyOut(ready_rf)
	 );
	 
	///////////////////// RAM /////////////////////////
	
	ram ram1 (
		.dataIn(dataOutRM), 
		.dataOut(dataInRM), 
		.addrIn(addrOutRM), 
		.rwIn(rwOutRM), 
		.triggerIn(triggerOutRM), 
		.readyOut(readyInRM)
	);

	initial begin
		// Initialize Inputs
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		
		#200 $finish;				// Change the delay as long as you'd need the simulation to run ( or remove it :P )

	end
      
endmodule

