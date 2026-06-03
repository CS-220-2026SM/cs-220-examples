CC = gcc
CFLAGS = -std=c18 -ggdb -Wall
A = 1
B = 1

test : arithTest
	./arithTest ${A} ${B}

arithTest : arithTest.c arith.c arith.h
	${CC} arithTest.c arith.c -o arithTest ${CFLAGS}

clean :
	-rm arithTest
