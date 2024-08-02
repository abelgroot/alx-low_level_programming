section .data
	msg db "Hello, Holberton", 0

section .text
	extern printf
	global _start

_start:
	; Call printf
	mov rdi, msg       ; First argument to printf (the format string)
	call printf        ; Call the printf function

	; Exit program
	mov rax, 60        ; syscall: exit
	xor rdi, rdi       ; status: 0
	syscall            ; invoke syscall

