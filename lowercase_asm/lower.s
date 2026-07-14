	.global toLower_asm

toLower_asm:
	# rdi holds a pointer to the string
	
	xor %rcx, %rcx
	jmp .L0
.L1:
	cmp $0x41, %al
	jl .L2
	cmp $0x5a, %al
	jg .L2
	add $0x20, %al
	mov %al, (%rdi, %rcx, 1)
.L2:
	inc %rcx

.L0:
	mov (%rdi, %rcx, 1), %al
	test %al, %al
	jne .L1 # jump to body if not null
	ret
