section .data
    msg db 'Hello, Holberton', 10, 0  

section .text
    global main

main:
    mov rdi, msg  
    xor rax, rax 
    call printf
    mov rax, 60  
    xor rdi, rdi
    syscall

extern printf
