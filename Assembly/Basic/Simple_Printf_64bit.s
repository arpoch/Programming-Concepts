
.text
.global main

    main:
        pushq   %rbp                    # Stack Frame
        movq    %rsp, %rbp              # 
        leaq    FSTR(%rip), %rdi        # Formate String
        xorl    %eax, %eax              # Value of %al register is used when calling function which use var_arg list such as printf thus the value of %al increase when we use vector registers else its set to 0
        call    printf                  # Calling printf function
        leave                           
        ret                             # The value return by printf would the number of values written
FSTR:   
    .string " \12\0"
