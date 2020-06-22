	.file	"Move_Instruction_Assembly_to_CPP.cpp"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2070:
	.cfi_startproc
	cmpl	$1, %edi
	je	.L7
.L4:
	ret
.L7:
	cmpl	$65535, %esi
	jne	.L4
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	call	__cxa_atexit@PLT
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2070:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.globl	_Z7decode1PlS_S_
	.type	_Z7decode1PlS_S_, @function
;--------------------Assembly_Code_Generated_For_decode1-----------------
_Z7decode1PlS_S_:
.LFB1590:
	.cfi_startproc
	endbr64
	movq	(%rdi), %r8
	movq	(%rsi), %rcx
	movq	(%rdx), %rax
	movq	%r8, (%rsi)
	movq	%rcx, (%rdx)
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
;------------------------------GAS_Syntax-------------------------------
.LFE1590:
	.size	_Z7decode1PlS_S_, .-_Z7decode1PlS_S_
	.type	_GLOBAL__sub_I__Z7decode1PlS_S_, @function
_GLOBAL__sub_I__Z7decode1PlS_S_:
.LFB2071:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE2071:
	.size	_GLOBAL__sub_I__Z7decode1PlS_S_, .-_GLOBAL__sub_I__Z7decode1PlS_S_
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z7decode1PlS_S_
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
