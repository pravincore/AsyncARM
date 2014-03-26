mov r10, #10	      ;r10=10
mov r5, #5	      ;r5=5
rsbs r1, r10, r5      ;r1=-5, n=1
adds r1, r1, r5       ;r1=0, z=1, c=1
add r1, r1, #1	      ;r=1,
eoreqs r1, r1, #255   ;r=254,