section .data
    hello_msg db "Hello, Holberton!", 0
    fmt db "%s\n", 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Call printf with hello_msg and fmt as arguments
    lea rdi, [rel hello_msg]
    lea rsi, [rel fmt]
    xor eax, eax
    call printf

    ; Return 0
    mov eax, 0

    mov rsp, rbp
    pop rbp
    ret

