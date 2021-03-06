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
output reg [3:0]addrRB,			//rb		
output reg triggerOutRB,			//rb

output reg [31:0]srcDstOut	// source destination information passed ahead
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
	 dataOut4 = 0;//original instruction
	 readyOut = 0;
	 triggerOut = 0;
	 srcDstOut = 0;
	 addrRB = 0;
	 triggerOutRB = 0;
	 resetFlag = 0;
	 join
	 end
	 
	 initial begin
	 #10;
	 forever @(posedge triggerIn or negedge triggerIn or resetTrigger)
	 begin
		readyOut = 0;
		if (!resetFlag) #1 triggerOut = ~triggerOut;
		else resetFlag = 0;
		#0 wait (readyIn);
		data = dataIn;
		dataOut4 = dataIn; // original instruction
		
		
		//-------------------- data processing instructions------------------------
		if( (~data[27] & ~data[26] & data[25])
			 |((~data[27] & ~data[26] & ~data[25])&(~data[7]|~data[4])) )
		begin
			typeOut = 0;
			srcDstOut = data[15:12];
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
				
				if(~data[4]) begin						// shift specified as an immediate value
					dataOut3 = data[11:7];
				end
				else begin									// shift specified by the bottom of a register
					addrRB = data[11:8];
					#1 triggerOutRB = ~triggerOutRB;
					#0 wait (readyInRB);
					dataOut3 = dataInRB[4:0];
				end
			end
			else begin
				dataOut2 = data[7:0];
				dataOut3 = data[11:8] << 1; 
			end
		
		end
		// -------------------------- data processing decoded-------------------------------
		
		//------------------------------branching--------------------
		
		if(data[27:25]==3'b101) begin
			typeOut = 1;
			addrRB = 4'b1111;;
			#1 triggerOutRB = ~triggerOutRB;
			#0 wait (readyInRB);
			dataOut1 = dataInRB;
			
			srcDstOut = 4'b1111;
			
		end
		
		//------------------------------branching decoded------------
		
		
		//--------------------------load/store------------------
		
		if(data[27:26]==2'b01) begin
			typeOut = 2;
			
			
			addrRB = data[19:16];
			#1 triggerOutRB = ~triggerOutRB;
			#0 wait (readyInRB);
			dataOut1 = dataInRB; // ram address data
			if (data[20]) srcDstOut = data[15:12]; // destination register
			
			if(!data[20]) begin // incase of store
				addrRB = data[15:12];
				#1 triggerOutRB = ~triggerOutRB;
				#0 wait (readyInRB);
				dataOut2 = dataInRB; //source data for store
			end
			
		end
		
		//-------------------load/store decoded------------------
		
		//-------------------multiply----------------------------
		
		if ((data[27:21] == 6'b000000)&&(data[7:4] == 4'b1001))	begin
			
			typeOut = 3;
			
			addrRB = data[3:0];
			#1 triggerOutRB = ~triggerOutRB;
			#0 wait (readyInRB);
			dataOut1 = dataInRB;
			
			addrRB = data[11:8];
			#1 triggerOutRB = ~triggerOutRB;
			#0 wait (readyInRB);
			dataOut2 = dataInRB;
			
			srcDstOut = data[19:16];
		
		end
		
		//-------------------multipy decoded---------------------
		
		
		// -------------------------- dataout(s) ready --------------------------
		#1 readyOut = 1;
	 end
	 end
	 
	 
	 always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
		
	 
endmodule
