
    .text    
    .globl main

main:
#   enter   $0,$0              The N immediate value is the number of bytes reserved on the stack for local use. More complex prologues can be obtained using different values (other than 0) for the second operand of the enter instruction.
    pushl   %ebp
    movl    %esp, %ebp          # Same as 64bit 
    movl    $10, %eax
    movl    %ebp, %esp
    popl    %ebp
#   leave                      # ---| The leave instruction performs the mov and pop instructions, as outlined above
    ret

