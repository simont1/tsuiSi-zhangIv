all: mylen.o
	gcc mylen.o

mylen.o : mylen.c str.h
	gcc -c mylen.c
