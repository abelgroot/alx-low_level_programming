section .data
	msg db 'Hello, Holberton', 10, 0   ; Format string for printf with a newline and null terminator

section .text
	extern printf                      ; Declare the printf function from the C library
	global _start                      ; Define the entry point for the linker

_start:
	; Set up the first argument to printf (the format string)
	mov rdi, msg                       ; First argument to printf (the format string)
	xor rax, rax                       ; Clear the RAX register (required for variadic functions in x86-64 ABI)
	call printf                        ; Call the printf function

	; Exit the program
	mov rax, 60                        ; The syscall number for exit
	xor rdi, rdi                       ; The exit code 0
	syscall                            ; Invoke the system call

