	.global sum_asm

sum_asm:
	# rdi holds a pointer to ary
	# esi holds the length of 
	xor %eax, %eax # return val = sum in eax
	xor %rcx, %rcx # we will use rcx as an index into the array
	jmp .L0
.L1:
	add (%rdi, %rcx, 4), %eax # (base, index, width)
	inc %rcx
.L0:
	cmp %ecx, %esi
	jg .L1 # jump to loop body if length > index
	ret
