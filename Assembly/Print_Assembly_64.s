

    .text
HELLO:
    .string "Hello World\12\0"
    .global main

main:
	subq	$8, %rsp
	leaq	HELLO(%rip), %rdi
    movq    %rdi, -8(%rsp)
	call	printf
	movl	$0, %eax
	addq	$8, %rsp
    call	printf
    #leave
    ret


