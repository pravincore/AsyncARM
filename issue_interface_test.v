`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:25 02/09/2014
// Design Name:   issuer
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/issue_interface_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: issuer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module issue_interface_test;
	
	reg reset;
	
	wire ready_fi;
	wire [31:0] data_fi;
	wire trigger_fi;
	
	reg trigger_id;
	wire ready_id;
	wire [31:0] data_id;
	
	wire [31:0]data_rf;
	wire trigger_rf;
	wire ready_rf;
	wire [31:0]addr_rf;
	
	wire [31:0]pcW_frg;
	wire [31:0]pcR_frg;
	
	wire [31:0]cpsr_irg;
	

	// Instantiate the Unit Under Test (UUT)
	issuer uut (
		.reset(reset),
		.readyIn(ready_fi), 
		.dataIn(data_fi), 
		.triggerOut(trigger_fi), 
		.triggerIn(trigger_id), 
		.readyOut(ready_id), 
		.dataOut(data_id), 
		.cpsr(cpsr_irg)
	);
	
	//////////////////////////////////////
	
	fetch fetch1 (
		.reset(reset),
		.triggerIn(trigger_fi), 
		.dataOut(data_fi), 
		.readyOut(ready_fi), 
		.dataIn(data_rf), 
		.triggerOut(trigger_rf), 
		.readyIn(ready_rf), 
		.addrOut(addr_rf), 
		.pcIn(pcR_frg), 
		.pcOut(pcW_frg)
	);
	//////////////////////////////////////
	
	rom rom1(
	 .addr(addr_rf),
	 .data(data_rf),
	 .triggerIn(trigger_rf),
	 .readyOut(ready_rf)
	 );
	
	//////////////////////////////////////
	
	regbank regb (
		.pcIn(pcW_frg),
		.pcOut(pcR_frg),
		.cpsrOut(cpsr_irg)
	);
	
	///////////////////////////////////////


	initial begin
		// Initialize Inputs
		trigger_id = 0;
		reset = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		
		wait (ready_id) trigger_id = ~trigger_id;
		#2;
		wait (ready_id) #2; trigger_id = ~trigger_id;
//		#0;
//		wait (ready_id) trigger_id = ~trigger_id;
//		#0;
//		wait (ready_id) trigger_id = ~trigger_id;
        
		// Add stimulus here
		#50 $finish;

	end
      
endmodule

