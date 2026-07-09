	.global func1

func1:
	mov (%rdi), %rsi # rdi = 0x555555558020, rsi = 1
	lea (%rdi), %rcx # rcx = 0x555555558020
	lea 8(%rdi), %rdx # rdx = 0x555555558028
	mov 16(%rdi, %rsi, 8), %rax # rax = 11
	lea 3(,%rax,2), %rbx # rbx = 2*rax + 3 = 25 
	ret
