CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : tryFact
	./tryFact 5

tryFact : tryFact.c fact.s
	${CC} tryFact.c fact.s -o tryFact ${CFLAGS} -z noexecstack

clean :
	-rm tryFact
