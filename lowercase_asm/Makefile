CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

test : lower
	./lower
lower:
	${CC} lower.c lower.s -o lower ${CFLAGS} -z noexecstack
clean :
	-rm lower
