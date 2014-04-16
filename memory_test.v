`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:08:55 04/15/2014
// Design Name:   memory
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/AsyncARM/memory_test.v
// Project Name:  AsyncARM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_test;
	
	reg reset;
	
	wire [31:0] dataOutRM; 
	wire [31:0] addrOutRM;
	wire rwOutRM; 
	wire triggerOutRM; 
	wire [31:0] dataInRM; 
	wire readyInRM;
	
	reg trigger_mw; // made reg for simulation testing
	wire ready_mw; 
	wire [31:0] data1_mw;
	wire [31:0] data2_mw;
	wire [31:0] cpsr_mw; 
	wire [31:0] srcDst_mw;
	wire w_mw;
	
	wire trigger_am;
	wire [31:0] data1_am;
	wire [31:0] data2_am;
	wire [31:0] cpsr_am;
	wire ready_am;
	wire w_am;
	wire m_am;
	wire [31:0]srcDst_am;
	
	wire [31:0] data1_da;
	wire [31:0] data2_da;
	wire [31:0] data3_da;
	wire [31:0] data4_da;
	wire [3:0] type_da;
	wire ready_da;
	wire trigger_da;
	wire [31:0]srcDst_da;
	
	wire ready_drg;
	wire [31:0] data_drg;
	wire [3:0] addr_drg;
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
	
//	wire [31:0]cpsr_wrg;
	

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.reset(reset), 
		.dataIn1(data1_am), 
		.dataIn2(data2_am), 
		.cpsrIn(cpsr_am), 
		.wIn(w_am), 
		.mIn(m_am), 
		.srcDstIn(srcDst_am), 
		.readyIn(ready_am), 
		.triggerOut(trigger_am), 
		.triggerIn(trigger_mw), 
		.readyOut(ready_mw), 
		.dataOut1(data1_mw), 
		.dataOut2(data2_mw), 
		.cpsrOut(cpsr_mw), 
		.srcDstOut(srcDst_mw), 
		.wOut(w_mw), 
		.dataOutRM(dataOutRM), 
		.addrOutRM(addrOutRM), 
		.rwOut(rwOutRM), 
		.triggerOutRM(triggerOutRM), 
		.dataInRM(dataInRM), 
		.readyInRM(readyInRM)
	);
	
	///////////////////////////////////////////
	
	ram ram1 (
		.dataIn(dataOutRM), 
		.dataOut(dataInRM), 
		.addrIn(addrOutRM), 
		.rwIn(rwOutRM), 
		.triggerIn(triggerOutRM), 
		.readyOut(readyInRM)
	);
	
	////////////////////////////////////////////
	
	alu alu1 (
		.reset(reset), 
		.dataIn1(data1_da), 
		.dataIn2(data2_da), 
		.dataIn3(data3_da), 
		.dataIn4(data4_da), 
		.typeIn(type_da), 
		.triggerIn(trigger_am), 
		.readyIn(ready_da), 
		.dataOut1(data1_am), 
		.dataOut2(data2_am), 
		.cpsrOut(cpsr_am), 
		.triggerOut(trigger_da), 
		.readyOut(ready_am), 
		.w(w_am), 
		.m(m_am), 
		.srcDstIn(srcDst_da), 
		.srcDstOut(srcDst_am)
	);
	
	///////////////////////////////////////////////////////////
	
	decode decode1 (
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
	
	
	///////////////////////////////////////////////////////
	
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
//		.cpsrIn(cpsr_wrg)
	);
	
	///////////////////////////////////////

	initial begin
		// Initialize Inputs
		reset = 0;
		trigger_mw =0;

		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		#0
		wait(ready_mw) trigger_mw = ~trigger_mw;
		#0
		wait(ready_mw) trigger_mw = ~trigger_mw;
		#0
		wait(ready_mw) trigger_mw = ~trigger_mw;
		#0
		wait(ready_mw) trigger_mw = ~trigger_mw;
        
		// Add stimulus here
		#50 $finish;

	end
      
endmodule

