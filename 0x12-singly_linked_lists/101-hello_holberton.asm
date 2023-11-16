; File: hello.asm
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line

	global  main
	extern  printf

	section .data
msg:    db      "Hello, Holberton", 10, 0

	section .text
main:
	; Save the stack pointer
	push    rbp
	mov     rbp, rsp

	; Call printf with msg as argument
	mov     rdi, msg
	mov     rax, 0
	call    printf

	; Restore the stack pointer and return
	mov     rsp, rbp
	pop     rbp
	ret

