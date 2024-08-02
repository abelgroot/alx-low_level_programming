section .data
	msg db "Hello, Holberton", 0   ; Format string for printf

section .text
	extern printf
	global main

main:
	; Call printf
	mov rdi, msg       ; First argument to printf (the format string)
	call printf        ; Call the printf function
 
	; Return from main
	; The C runtime will handle returning control to the operating system
	mov eax, 0         ; Return code 0
	ret                ; Return to the calling function (C runtime)

