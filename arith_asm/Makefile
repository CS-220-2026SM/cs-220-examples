CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : arithTest
	./arithTest 3 2

arithTest : arithTest.c arith.s arith.h
	${CC} arithTest.c arith.s -o arithTest ${CFLAGS} -z noexecstack

clean :
	-rm arithTest
