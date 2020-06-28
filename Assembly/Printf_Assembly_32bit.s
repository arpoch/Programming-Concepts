HELLO:
    .string "Hello, world!\12\0"

    .text           #The code is kept under the tex section

    .global main    
main:
    pushl   %ebp
    movl    %esp, %ebp
    ;subl    $4, %esp
    ;movl    $0, %eax
    ;movl    %eax, -4(%ebp)
    ;movl    -4(%ebp), %eax
    movl    $HELLO, (%esp)
    call    printf
    movl    $0, %eax
    leave
    ret
