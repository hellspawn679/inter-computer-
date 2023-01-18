	.file	"primenumebrs.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "enter a range upto which you have to find prime number\12 \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "2\0"
LC3:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_puts
	movl	$3, 28(%esp)
	jmp	L2
L7:
	movl	$0, 24(%esp)
	movl	$2, 20(%esp)
	jmp	L3
L5:
	movl	28(%esp), %eax
	cltd
	idivl	20(%esp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	L4
	movl	$1, 24(%esp)
L4:
	addl	$1, 20(%esp)
L3:
	movl	20(%esp), %eax
	cmpl	28(%esp), %eax
	jl	L5
	cmpl	$1, 24(%esp)
	je	L6
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
L6:
	addl	$1, 28(%esp)
L2:
	movl	16(%esp), %eax
	cmpl	%eax, 28(%esp)
	jle	L7
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
