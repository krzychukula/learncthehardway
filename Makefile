CFLAGS=-Wall -g

all: clean ex1 ex3 ex5

ex1: ex1
ex3: ex3
ex5: ex5

clean:
	rm -f ex1
	rm -f ex3

