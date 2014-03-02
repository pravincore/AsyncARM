`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:22 01/21/2014 
// Design Name: 
// Module Name:    alu 
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
module alu_template(
input reset,

input [31:0] operand1,operand2,operand3,instruction, // decode
// operand3 gives shift amount and instrcution is the 32 bit ARM code 

input [3:0] instruction_type, // decode //like data processing or multiply or branch etc

input triggerIn,// writeback //WB triggers alu

input readyIn,// decode

output reg [31:0] dataOut1, dataOut2, // writeback
// For long multiplication dataOut2 holds upper 32 bits and dataOut1 holds lowe 32 bits of the answer

output reg [31:0] cpsr, // writeback

output reg w,// writeback //If w=1 pass to writeback  , else pass to memory

output reg triggerOut, // decode

output reg readyOut// writeback //ALU informs WB that its ready
);




reg [31:0]Operand2; // Barrel shifted operand2 = Operand2
integer i,j,k,shiftType,resetFlag;
reg carry_new,carry_old; // Carry of cuurent and prev stages

event resetTrigger;

initial fork
resetFlag = 0;
readyOut=0;
dataOut1=0;
dataOut2=0;
cpsr=0;
w=0;
readyOut=0;
triggerOut=0;
join

initial begin
#10;
forever @ (posedge triggerIn or negedge triggerIn or resetTrigger)
begin

if (!resetFlag) #1 triggerOut = ~triggerOut;
else resetFlag=0;
#0 wait (readyIn);
	
case (instruction_type) // From decoder

4'b0000 : begin
$display("ran at time ", $time);
//----------------------------Begin data processing-----------------------------------------------------
//--------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------





//---------------------------Barrel shifter-------------------------------------------------------------
  
	if (instruction[~25]) shiftType = instruction[6:5];
	else shiftType = 2'b11;
	
	case (shiftType) // shift type , operand3 holds shift amount
	
	2'b00 : {carry_new,Operand2}=operand2 << operand3;//--------LSL------------
	
	2'b01 : {Operand2,carry_new}=operand2 >> (operand3-1);//--------LSR-----------
	
	2'b10 : begin 
			  Operand2[31] = operand2[31];
			  {Operand2[30:0],carry_new} = operand2[30:0] >> {operand3-1};//------------ASR------------
			  end
			  
	2'b11 : begin
	        
			  for(k=31,j=31-operand3;j>-1;k=k-1,j=j-1)
			  Operand2[j]=operand2[k];
			  for(j=32-operand3,k=0;k<operand3;k=k+1,j=j+1)
			  Operand2[j]=operand2[k];
			  //Operand2[31:0]={operand1[shift_amount-1:0],operand1[31:31-shift_amount]};
			  carry_new=operand2[operand3-1];
			  
			  end//------------------------------------ROR------------------
	
	
	endcase
  
  
	
	
	
	//----------------------------Start operation------------------------------------------
	
	 case(instruction[31:28])
	 
	 4'b0000 : begin 
				  dataOut1 = operand1 & Operand2;
				  w=1;//Write back register value
				  end // AND
				  
				  
				  
	 4'b0001 : begin
				  dataOut1 = operand1 ^ Operand2;
				  w=1;
				  end
				 // EOR
				 
				 
	 4'b0010 : begin 
				   dataOut1 = operand1 - Operand2; 
					w=1;
				  end// SUB
				  
				  
	 4'b0011 : begin
				  dataOut1 = Operand2 - operand1;
				  w=1	;			  
				  end//RSB
				  
				  
				  
    4'b0100 : begin 
				  {carry_new,dataOut1} = operand1 + Operand2;
				  w=1;
				  end// ADD
				  
				  
	 4'b0101 : begin 
				  {carry_new,dataOut1} = operand1 + Operand2 + carry_old;
				  w=1;
				  end//ADC
	
	
	 4'b0110 : begin 
				  dataOut1=operand1-Operand2+carry_old -1;
				  w=1;
				  end//SBC
				  
				  
	 4'b0111 : begin 
	           dataOut1=Operand2-operand1+carry_old-1;
				  end
				  //RSC 
				  
				  
	 4'b1000 : begin
				  dataOut1 = operand1 & Operand2;
				  w=0;//Do not write back dataOut1
              // TST
				  end
				  
	 4'b1001 : begin 
	           dataOut1 = operand1 ^ Operand2;
				  w=0;
				  // TEQ
				  end
				  
	 4'b1010 : begin 
				  dataOut1=operand1-Operand2;
				  w=0;
				  end// CMP
				  
				  
	 4'b1011 : begin 
	           {carry_new,dataOut1}=operand1+Operand2;
				  w=0;
				  end
				  
				  
	 4'b1100 : begin 
				  dataOut1=operand1 | Operand2;
				  w=1;
				  end
				  
				  
    4'b1101 : begin
				  dataOut1=Operand2;
				  w=1;//MOV
	           end
	 
	 4'b1110 : begin 
				  dataOut1= operand1 & (~(Operand2));//BIC
				  w=1;
				  end
				  
				  
	 4'b1111 : begin
				  dataOut1=~(Operand2);
				  w=1;
				  end
				  
				  
	 endcase
	 
	 
	 carry_old=carry_new; // Update for next cycle



if (  instruction[20] )  // If cpsr update is required
begin

//---------------------------------Update cpsr flags for datda processing instructions---------------------------------------------

//----------Carry -----------------

if ( (instruction[31:28]==4'b0100) || (instruction[31:28]==4'b0101) || (instruction[31:28]==4'b1011))
// Carry is affected only by these instructions
cpsr[29] = carry_new;


//---------Zero-------------

if (dataOut1==32'b0)
cpsr[30]=1'b1;
else 
cpsr[30]=1'b0;
			
				
//---------Negative--------

if(dataOut1[31])
 cpsr[31]=1;
else
 cpsr[31]=0;



//---------Overflow----------
if ( (instruction[31:28]==4'b0100) || (instruction[31:28]==4'b0101) || (instruction[31:28]==4'b1011))
begin
if(operand1[31]==0 && Operand2[31]==0 && dataOut1[31]==1) // Condition for overflow. If both nos are pos and dataOut1 is neg 
 cpsr[28] =1;
else if(operand1[31]==1 && Operand2[31]==1 &&dataOut1[31]==0)// Condition
 cpsr[28]=1;
else
 cpsr[28]=0;
end


end

end
//----------------------------------------End of Data processing opeartions---------------------------------------























//----------------------------------------Begin Multiply operations------------------------------------------------

4'b0001 : 

begin

	case (instruction[21]) // accumulate
	
	1'b0 : begin 
			 dataOut1= operand1 * operand2;
			 w=1;
			 end
	
	1'b1 : begin
			 dataOut1=operand1 * operand2 + operand3; // operand 3 has value to be accumulated. see in decoder
			 w=1;
			 end
	
	endcase
	
	
	
//--------------Update flags for Multiply.. Actually carry and overflow are meaningless in multiplication....---------------	
	
	
// ------------CArry----------
cpsr[29] = carry_new;


//---------Zero-------------

if (dataOut1==32'b0)
cpsr[30]=1'b1;
else 
cpsr[30]=1'b0;
			
				
//---------Negative--------

if(dataOut1[31])
 cpsr[31]=1;
else
 cpsr[31]=0;



//---------Overflow----------

if(operand1[31]==0 && operand2[31]==0 && dataOut1[31]==1)
 cpsr[28]=1;
else if(operand1[31]==1 && operand2[31]==1 &&dataOut1[31]==0)
 cpsr[28]=1;
else
 cpsr[28]=0;


end
	


//------------------------------------------End Multiply------------------------------------------------------





	
	
	
	
//-------------------------------------------------------------------------------------------------------------------
//-----------------------------------------Begin Multiply Long Instructions------------------------------------------
	
4'b0011 : 

begin
	
	case ({instruction[22],instruction[21]}) // unsigned,accumulate
	
	2'b00 : begin {dataOut2,dataOut1} = operand1 * operand2; w=1; end//UMULL

   2'b01 : begin {dataOut2,dataOut1} = operand1 * operand2 + {dataOut2,dataOut1}; w=1; end //UMLAL
	
	2'b10 : begin 
			  {dataOut2,dataOut1} = operand1[30:0] * operand2[30:0]; 
			  if(operand1[31] == operand2[31])
			  dataOut2[31] = 0;
			  else
			  dataOut2[31]=1; 
			  
			  w=1; 
			  end//SMULL

   2'b11 : begin // Needs update . another decoder bus needed
			 {dataOut2,dataOut1} = operand1 * operand2 + {dataOut2,dataOut1};w=1; end//SMLAL

   endcase
	
	
	if (  instruction[20] ) 
begin
//---------------------------------Update cpsr flags-.....Carry adn overflow are meningless for multiplicatoin--------------------------------------------

//----------Carry -----------------

cpsr[29]= carry_new;


//---------Zero-------------
case(instruction[22]) // unsigned or signed 
 // dataOut1 is used for unsigned and dataOut1_s is used for signed

1'b0 : 	begin
			if (dataOut1==32'b0)
			cpsr[30]=1'b1;
			else 
			cpsr[30]=1'b0;
			end
			

1'b1 : 	begin
         if (dataOut1==32'b0)
			cpsr[30]=1'b1;
			else 
			cpsr[30]=1'b0;
			end
endcase			

//---------Negative--------

if(dataOut1[31])
 cpsr[31]=1;
else
 cpsr[31]=0;



//---------Overflow----------
if(operand1[31]==0 && Operand2[31]==0 && dataOut1[31]==1)
 cpsr[28]=1;
else if(operand1[31]==1 && Operand2[31]==1 &&dataOut1[31]==0)
 cpsr[28]=1;
else
 cpsr[28]=0;



end
end

//---------------------------------------------End Multiply Long operations------------------------------------------------------------------------------


default: w=0;


endcase



readyOut=1;


end // end forever
end

always @(reset)
if (reset) begin
	wait (readyIn);
	resetFlag = 1;
	-> resetTrigger;
end

endmodule
