	.file	"simplemalloc.c"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$16, (%esp)
	call	malloc
	movl	%eax, 28(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	free
	movl	$0, 28(%esp)
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-11)"
	.section	.note.GNU-stack,"",@progbits
