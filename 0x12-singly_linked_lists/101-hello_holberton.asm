section .data
	msg db "Hello, Holberton", 0   ; Format string for printf

section .text
	extern printf                  ; Declare the printf function from the C library
	global main                    ; Define the entry point for the linker

main:
	; Set up the first argument to printf (the format string)
	mov rdi, msg                   ; First argument to printf (the format string)
	xor rax, rax                   ; Clear the RAX register (required for variadic functions in x86-64 ABI)
	call printf                    ; Call the printf function

	; Return from main
	mov eax, 0                     ; Return code 0
	ret                            ; Return to the calling function (C runtime)

