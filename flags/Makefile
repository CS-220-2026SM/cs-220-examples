CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

flag_test : flag_asm.s flag_test.c
	${CC} flag_asm.s flag_test.c -o flag_test ${CFLAGS} -z noexecstack

clean :
	-rm flag_test
