mov r4, #10
mov r5, #15
str r4,[r5]
ldr r1, [r5]


;mov r10, #10
;mov r1, #0
;loop:
;add r1, r1, r10
;b loop

;mov r1, #0
;loop: adds r3, r10, #0
;beq fin
;add r1, r1, r10
;sub r10, r10, #1
;b loop
;fin: mov r2, #1

;mov r10, #10          ;r10=10
;mov r5, #5            ;r5=5
;adds r1, r1, r5       ;r1=0, z=1, c=1
;add r1, r1, #1        ;r=1,
;eors r1, r1, #255   ;r=254,