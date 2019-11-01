section .data
	text db "Hello, Holberton", 10
	.size equ $ - text

section .text
	global main
	main:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, text.size
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
