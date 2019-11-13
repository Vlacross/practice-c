	.file	"condition.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"\n\n\t\tSimple World Again I See\n\n"
.LC1:
	.string	"Please enter a number:"
.LC2:
	.string	"%d"
.LC3:
	.string	"Number is less that 100!"
.LC4:
	.string	"Number is 100!"
.LC5:
	.string	"Number is greater than 100!"
	.align 8
.LC6:
	.string	"\n\n\t\tSimple World\n\t\t\tSimply Out\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	call	puts
	movl	$.LC1, %edi
	call	puts
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-12(%rbp), %eax
	cmpl	$99, %eax
	jg	.L2
	movl	$.LC3, %edi
	call	puts
	jmp	.L3
.L2:
	movl	-12(%rbp), %eax
	cmpl	$100, %eax
	jne	.L4
	movl	$.LC4, %edi
	call	puts
	jmp	.L3
.L4:
	movl	$.LC5, %edi
	call	puts
.L3:
	movl	$.LC6, %edi
	call	puts
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L6
	call	__stack_chk_fail
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
