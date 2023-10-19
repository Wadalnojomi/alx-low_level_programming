section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main

    extern printf

main:
    sub rsp, 8
    lea rdi, [hello]
    xor eax, eax
    call printf
    add rsp, 8
    ret
