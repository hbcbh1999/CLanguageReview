	.file	"test_stack.c"
	.section	.rodata
.LC0:
	.string	"b argc = %d\n"
	.text
.globl b
	.type	b, @function
b:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$.LC0, %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	leave
	ret
	.size	b, .-b
	.section	.rodata
.LC1:
	.string	"a argc = %d\n"
	.text
.globl a
	.type	a, @function
a:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	8(%ebp), %eax
	addl	$1, %eax
	movl	%eax, (%esp)
	call	b
	movl	$.LC1, %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	leave
	ret
	.size	a, .-a
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	a
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
