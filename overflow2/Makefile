CC = gcc
CFLAGS = -Wall -ggdb -std=c18

test : buf answer.txt
	setarch linux64 -R ./buf < answer.txt

clean :
	-rm buf
