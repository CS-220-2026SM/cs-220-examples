CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : main
	./main

main : main.c var.s
	${CC} main.c var.s -o main ${CFLAGS} -z noexecstack

clean :
	-rm main
