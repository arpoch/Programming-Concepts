

.text
.globl _main                # This line tells the assembler that the label _main is a global label, which allows other parts of the program to see it.
    _main:                  # This is the LABEL , it is converted into address during linking

.data                       # This is the data section for all initialized global or static data 
    WORD_INTI:              # LABEL
        .word   0xABCD      # Size of variable is 2bytes
    BYTE_INTI:              # LABEL
        .byte   0XCD        # Size of the variable is byte

.bss                 # This is the bss section for all uninitialized data
    WORD_UNINTI:
        .lcomm  WORD_UNINTI, 2  # 2bytes are reserved for the varibel and its initialized to 0 value


