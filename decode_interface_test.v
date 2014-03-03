`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:11:26 02/25/2014
// Design Name:   decode
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/decode_interface_test.v
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

module decode_interface_test;	
	
	reg reset;
	
	wire [31:0] data1_da;
	wire [31:0] data2_da;
	wire [31:0] data3_da;
	wire [31:0] data4_da;
	wire [3:0] type_da;
	wire ready_da;
	reg trigger_da;
	wire [31:0]srcDst_da;
	
	wire ready_drg;
	wire [31:0] data_drg;
	wire [31:0] addr_drg;
	wire trigger_drg;
	
	wire ready_fi;
	wire [31:0] data_fi;
	wire trigger_fi;
	
	wire trigger_id;
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
	decode uut (
		.reset(reset), 
		.dataIn(data_id), 
		.readyIn(ready_id), 
		.triggerIn(trigger_da), 
		.dataOut1(data1_da), 
		.dataOut2(data2_da), 
		.dataOut3(data3_da), 
		.dataOut4(data4_da), 
		.typeOut(type_da), 
		.readyOut(ready_da), 
		.triggerOut(trigger_id), 
		.readyInRB(ready_drg), 
		.dataInRB(data_drg), 
		.addrRB(addr_drg), 
		.triggerOutRB(trigger_drg), 
		.srcDstOut(srcDst_da)
	);
	
	
	//////////////////////////////////////
	
	issuer issue1 (
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
		.triggerInr(trigger_drg),
//		.triggerInw(),
//		.dataIn(),
		.addrr(addr_drg),
//		.addrw(),
		.readyOut(ready_drg),
		.dataOut(data_drg),
		.pcIn(pcW_frg),
		.pcOut(pcR_frg),
		.cpsrOut(cpsr_irg)
	);
	
	///////////////////////////////////////

	initial begin
		// Initialize Inputs
		reset = 0;
		trigger_da = 0;
		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		#0
		wait(ready_da) trigger_da = ~trigger_da;
      #0
		wait(ready_da) trigger_da = ~trigger_da;
		
		#50 $finish;
		// Add stimulus here

	end
      
endmodule

