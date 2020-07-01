
    .text
    .global main
main:
#   enter   $0,$0              The N immediate value is the number of bytes reserved on the stack for local use. More complex prologues can be obtained using different values (other than 0) for the second operand of the enter instruction.
    pushq   %rbp               # -- Pushes current base pointer onto the stack, so it can be restored later.
    movq    %rsp, %rbp         #  | Funtion Prologue { Assigns the value of stack pointer to base pointer so that a new stack frame will be created on top of the old stack frame. }
    subq    $0, %rsp           # -- The stack pointer is decreased to make room for the function's local variables.
    movq    $100, %rax
    movq    %rbp, %rsp         # ---- Drop the stack pointer to the current base pointer, so room reserved in the prologue for local variables is freed.
    popq    %rbp               #    | Function epilogue{Pops the base pointer off the stack, so it is restored to its value before the prologue}
#   leave                      # ---| The leave instruction performs the mov and pop instructions, as outlined above
    ret                        # ---- Returns to the calling function, by popping the previous frame's program counter off the stack and jumping to it
