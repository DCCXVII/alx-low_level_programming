section .data
    msg db "Hello, Holberton", 0

section .text
    global main

    extern printf

main:
    push msg
    push format
    call printf
    add rsp, 16

    ret

format:
    db "%s\n", 0

