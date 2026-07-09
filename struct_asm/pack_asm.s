	.globl packet_set

packet_set:
	# pointer p is in rdi
	# char t is in sil
	# int s is in edx
	mov %sil, (%rdi)
	mov %edx, 4(%rdi)
	ret
