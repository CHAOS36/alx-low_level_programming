section .data
    format db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    push format
    call printf
    add  esp, 4
    xor  eax, eax
    ret

