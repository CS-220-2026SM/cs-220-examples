	.global add_asm
	.global sub_asm
	.global mul_asm
	.global divide_asm
	.global remain_asm
	.global expnt_asm
add_asm:
	# first arg (a) in edi
	# second arg (b) in esi
	# return value goes in eax
	mov %edi, %eax
	add %esi, %eax
	ret

sub_asm:
	mov %edi, %eax
	sub %esi, %eax
	ret

mul_asm:
	mov %edi, %eax
	imul %esi, %eax
	ret

divide_asm:
	mov %edi, %eax # dividend is in eax
	cdq # convert long to quad
	# sign extends eax into edx:eax
	idiv %esi # esi is our divisor
	# quotient is now in eax
	# remainder is now in edx
	ret

remain_asm:
	mov %edi, %eax
	cdq
	idiv %esi
	mov %edx, %eax # mov remainder in edx to eax
	ret

expnt_asm:
	xor %eax, %eax # change this
	ret

