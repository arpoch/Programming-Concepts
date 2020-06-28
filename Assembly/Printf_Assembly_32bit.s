HELLO:
    .string "Helloworld!\12\0"

    .text           #The code is kept under the tex section

    .global main    
main:
    pushl   %ebp
    movl    %esp, %ebp
    movl    $HELLO, (%esp)
    call    printf
    movl    $0, %eax
    leave
    ret
