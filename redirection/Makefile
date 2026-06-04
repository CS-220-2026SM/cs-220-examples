CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : sumFromStdIn printMultiples
	./printMultiples 3 20 | ./sumFromStdIn

clean :
	-rm printMultiples sumFromStdIn
