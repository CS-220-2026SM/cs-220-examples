CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : main
	./main

main : main.c asm_func.s
	${CC} main.c asm_func.s ${CFLAGS} -o main -z noexecstack

clean :
	-rm main
