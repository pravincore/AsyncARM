`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:22 01/31/2014 
// Design Name: 
// Module Name:    cpu 
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
//use the following as suffix in the nomenclature of wires in cpu 
//rom r, fetch f, issue i, decode d, alu a, writeback w, memory m, ram ra,
//prog. counter p, register bank rg
//
//
//////////////////////////////////////////////////////////////////////////////////

module cpu(

	input reset,

////////// ROM interface //////////
	input [31:0]addr_rf,				//
	input trigger_rf,					//
	output [31:0]data_rf,			//
	output ready_rf,					//
///////////////////////////////////

////////// RAM interface //////////
	output [31:0] dataOutRM, 		//
	output [31:0] addrOutRM,		//
	output rwOutRM, 					//
	output triggerOutRM, 			//
	input [31:0] dataInRM, 			//
	input readyInRM					//
///////////////////////////////////

    );
	
	wire [31:0] data_wrg; 
	wire [31:0] addr_wrg; 
	wire [31:0] cpsr_wrg;  
	wire trigger_wrg;
	
	wire trigger_mw; 
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
	
	wire [31:0]pcW_frg;
	wire [31:0]pcR_frg;
	
	wire [31:0]cpsr_irg;
	
	///////////////////////////////////////////////////
	
	writeback writeback1 (
		.reset(reset), 
		.dataIn1(data1_mw), 
		.dataIn2(data2_mw), 
		.cpsrIn(cpsr_mw), 
		.srcDstIn(srcDst_mw), 
		.readyIn(ready_mw), 
		.wIn(w_mw), 
		.dataOut(data_wrg), 
		.addrOut(addr_wrg), 
		.cpsrOut(cpsr_wrg), 
		.triggerOut(trigger_mw), 
		.triggerOutRB(trigger_wrg)
	);
	
	////////////////////////////////////////////////////
	
	memory memory1 (
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
	
	regbank regb (
		.triggerInr(trigger_drg),
		.triggerInw(trigger_wrg),
		.dataIn(data_wrg),
		.addrr(addr_drg),
		.addrw(addr_wrg),
		.readyOut(ready_drg),
		.dataOut(data_drg),
		.pcIn(pcW_frg),
		.pcOut(pcR_frg),
		.cpsrOut(cpsr_irg),
		.cpsrIn(cpsr_wrg)
	);
	
	///////////////////////////////////////
	 
endmodule
