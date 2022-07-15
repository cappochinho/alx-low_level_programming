extern printf

	section	.text
	global main

main:
	push rbp

	mov	rdi, fmt
	mov	rsi, message
	mov	rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret

	section	.data
message: db	"Hello, Holberton", 0
fmt:	db	"%s", 10, 0
