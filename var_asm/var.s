	.global set_asm
set_asm:
	# esi = num
	# rdi = ptr
	mov %esi, (%rdi)
	ret
