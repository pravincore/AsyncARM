`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:20 01/24/2014 
// Design Name: 
// Module Name:    decode 
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
module decode(
input reset,
// pipeline interface
input [31:0]dataIn,				//issuer
input readyIn,						//issuer
input triggerIn,					//alu
output reg [31:0]dataOut1,		//alu
output reg [31:0]dataOut2,		//alu
output reg [31:0]dataOut3,		//alu
output reg [31:0]dataOut4,		//alu
output reg [3:0]typeOut,		//alu
output reg readyOut,				//alu
output reg triggerOut,			//issuer

// register bank interface
input readyInRB,					//rb
input [31:0]dataInRB,			//rb
output reg [31:0]addrRB,		//rb		
output reg triggerOutRB			//rb
    );
	 
	 reg [31:0]data;
	 event resetTrigger;
 	 integer resetFlag;
	 
	 initial begin
	 fork
	 typeOut = 0;
	 dataOut1 = 0;
	 dataOut2= 0;
	 dataOut3 = 0;
	 dataOut4 = 0;
	 readyOut = 0;
	 triggerOut = 0;
	 addrRB = 0;
	 triggerOutRB = 0;
	 join
	 end
	 
	 initial begin
	 #10;
	 forever @(posedge triggerIn or negedge triggerIn or resetTrigger)
	 begin
		$display("ran at time ", $time);
		readyOut = 0;
		if (!resetFlag) #1 triggerOut = ~triggerOut;
		else resetFlag = 0;
		#0 wait (readyIn);
		data = dataIn;
		dataOut4 = dataIn; // original instruction
		
		if( (~data[27] & ~data[26] & data[25])
			 |((~data[27] & ~data[26] & ~data[25])&(~data[7]|~data[4])) ) // condition for data processing instructions
		begin
			typeOut = 0;
			
			if ( data[24:21] != 4'b1101 && data[24:21] != 4'b1111 ) begin
			// get operand1
			addrRB = data[19:16];
			#1 triggerOutRB = ~triggerOutRB;
			#0 wait (readyInRB);
			dataOut1 = dataInRB;
			end
			
			// get operand2
			if(~data[25])
			begin
				addrRB = data[3:0];
				#1 triggerOutRB = ~triggerOutRB;
				#0 wait (readyInRB);
				dataOut2 = dataInRB;
			end
			else dataOut2 = data[7:0];
		
		end
		#1 readyOut = 1;
//		trigger
	 end
	 end
	 
	 
	 always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
	 
endmodule
