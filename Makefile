CFLAGS=-Wall -g

all: clean ex1 ex3 ex5 ex6

ex1: ex1
ex3: ex3
ex5: ex5
ex6: ex6

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex5
	rm -f ex6