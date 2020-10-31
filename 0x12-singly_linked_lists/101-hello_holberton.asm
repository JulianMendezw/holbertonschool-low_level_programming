/* Attempting to output loop counter with printf*/

.global main
.func main

main:
    PUSH {LR}
    LDR R0, =string
    MOV R1, #0x5                      @ iterations counter
    BAL _loop

_loop:
    SUBS R1, #0x1                    @ decrement, set flags
    BL printf                                 @ call to the function
    BEQ _exit                              @ if R1 == 0, exit
    BNE _loop                             @ else, re-loop

_exit:
    POP {PC}
    MOV PC, LR

.data
string:
    .asciz "%d\n"