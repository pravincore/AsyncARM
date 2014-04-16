`timescale 1ns / 1ps

module alu(
	input reset,					//global
	input [31:0]dataIn1,			//decoder
	input [31:0]dataIn2,			//decoder
	input [31:0]dataIn3,			//decoder
	input [31:0]dataIn4,			//decoder
	input [3:0]typeIn,			//decoder
	input triggerIn,				//memory
	input readyIn,					//decoder
	output reg [31:0]dataOut1, //memory
	output reg [31:0]dataOut2,	//memory
	output reg [31:0]cpsrOut,	//memory
	output reg triggerOut,		//decoder
	output reg readyOut,			//memory
	output reg w,					//memory
	output reg m,					//memory
	input [31:0]srcDstIn,		//decoder
	output reg [31:0]srcDstOut	//memory
	);
	
	reg [31:0]data1;
	reg [31:0]data2;
	reg [31:0]data3;
	reg [31:0]data4;
	reg [3:0]type;
	reg carryNew, carryOld, resetFlag;
	reg n,z,c,v;
	reg [1:0]shiftType;
	event resetTrigger;
	reg signed [31:0]temp;
	
	initial fork
		dataOut1 =0;
		dataOut2 =0;
		cpsrOut =0;
		triggerOut =0;
		readyOut =0;
		w =0;
		m =0;
		srcDstOut =0;
		data1 =0;
		data2 =0;
		data3 =0;
		data4 =0;
		type =0;
		carryNew =0;
		carryOld =0;
		resetFlag =0;
		shiftType =0;
		n =0;
		z =0;
		c =0;
		v =0;
		temp =0;
	join
	
	initial begin
		#10
		forever @(posedge triggerIn or negedge triggerIn or resetTrigger) begin
			
			readyOut = 0;
			m = 0;
			w = 0;
			if (!resetFlag) #1 triggerOut = ~triggerOut;
			else resetFlag=0;
			#0 wait (readyIn);
			
			fork
				data1 = dataIn1;
				data2 = dataIn2;
				data3 = dataIn3;
				data4 = dataIn4;
				type = typeIn;
				srcDstOut = srcDstIn;
			join
			
			case(type)
				4'b0000:						// data processing instruction
					begin
						//-------------- barrel shifter-------------------
						if (~data4[25]) shiftType = data4[6:5];
						else shiftType = 2'b11;
						
						case(shiftType)
						
							2'b00: {carryNew,data2} = data2 << data3; // lsl
							
							2'b01: {data2,carryNew} = data2 >> data3; // lsr
							
							2'b10: {data2,carryNew} = data2 >>> data3; // asr
							
							2'b11: data2 = (data2 << data3)|(data2 >> (32-data3)); // ror
						endcase
						//--------------end of barrel shifter -------------
						
						case(data4[24:21]) //--------------- resolving operation------------
							4'b0000:	//and
								begin
									dataOut1 = data1 & data2;
									w = 1;
								end
							4'b0001:	//xor
								begin
									dataOut1 = data1 ^ data2;
									w = 1;
								end
							4'b0010:	//sub
								begin
									dataOut1 = data1 - data2;
									w = 1;
								end
							4'b0011:	//reverse sub
								begin
									dataOut1 = data2 - data1;
									w = 1;
								end
							4'b0100:	//add
								begin
									{carryNew,dataOut1} = data1 + data2;
									w = 1;
								end
							4'b0101:	//add with carry
								begin
									{carryNew,dataOut1} = data1 + data2 + carryOld;
									w = 1;
								end
							4'b0110:	//sub with carry
								begin
									dataOut1 = data1 - data2 + carryOld - 1;
									w = 1;
								end
							4'b0111:	//reverse sub with carry
								begin
									dataOut1 = data2 - data1 + carryOld - 1;
									w = 1;
								end
							4'b1000:	//tst
								begin
									dataOut1 = data1 & data2;
									w = 0;
								end
							4'b1001:	//teq
								begin
									dataOut1 = data1 ^ data2;
									w = 0;
								end
							4'b1010:	//cmp
								begin
									dataOut1 = data1 - data2;
									w = 0;
								end
							4'b1011:	//cmn
								begin
									dataOut1 = data1 + data2;
									w = 0;
								end
							4'b1100:	//or
								begin
									dataOut1 = data1 | data2;
									w = 1;
								end
							4'b1101:	//move
								begin
									dataOut1 = data2;
									w = 1;
								end
							4'b1110:	//bit clear
								begin
									dataOut1 = data1 & ~data2;
									w = 1;
								end
							4'b1111:	//mvn
								begin
									dataOut1 = ~data2;
									w = 1;
								end
						endcase //----------------------end of operation-------------------
						carryOld = carryNew;
						
						//--------------------------Updating cpsr flags conditionally--------
						if(data4[20]) begin
							
							//----------Carry -----------------
							if ( (data4[24:21]==4'b0100) || (data4[24:21]==4'b0101) || (data4[24:21]==4'b1011)) // Carry is affected only by these instructions
								cpsrOut[29] = carryNew;
							else
								cpsrOut[29] = 1'b0;
							//---------Zero-------------
							if (dataOut1 == 0)
								cpsrOut[30]=1'b1;
							else 
								cpsrOut[30]=1'b0;
							
							//---------Negative--------
							if(dataOut1[31])
								cpsrOut[31] = 1'b0;
							else
								cpsrOut[31] = 1'b0;
							
							//---------Overflow----------
							if ( (data4[24:21] == 4'b0100) || (data4[24:21] == 4'b0101) || (data4[24:21] == 4'b1011))
							begin
								if(data1[31]==0 && data2[31]==0 && dataOut1[31]==1) // Condition for overflow. If both nos are pos and dataOut1 is neg 
									cpsrOut[28] =1;
								else if(data1[31]==1 && data2[31]==1 && data1[31]==0)// Condition
									cpsrOut[28]=1;
							else
								cpsrOut[28]=0;
							end
							
						end
						//--------------------------end of cpsr update-----------------------
						
					end
					//---------------------------end of data processing instructions-----------
				
				//--------------------------- branching------------------------
				4'b0001: 
				begin
				//$display("ran at time ", $time);
					data4[23:0] = data4[23:0] +1;
					data4[31:8] = data4[23:0];
					data4[7:0] = 0;
					temp = data4;							// Unless you have a signed variable, ASR won't work in verilog
					data4 = temp >>> 8;
					dataOut1 = data4+data1;
					w =1;
					
				end
				//--------------------------end of branching-------------------
				
				//---------------------------load/store------------------------
				4'b0010:
				begin
					$display("In ALU, ran l/s at", $time);
					if(data4[20]) begin // load
						srcDstOut = data4[15:12];	// destination register number
						dataOut2 = dataIn2;			// source ram location
						dataOut1 = 1;
						w = 1;
					end
					else begin		// store
						$display("In ALU, ran store at", $time);
						srcDstOut = dataIn2;			// destination ram location
						dataOut2 = dataIn1;			// source data
						dataOut1 = 0;
						w = 0;
					end
					
					m = 1;
				end		
				//---------------------------end of load/store-----------------
				
				default: $display("Instruction type not supported (yet)!");
			endcase
			
			#1 readyOut =1;
		end
	end
	
	always @(reset)
		if (reset) begin
			wait (readyIn);
			resetFlag = 1;
			-> resetTrigger;
		end
	
endmodule
