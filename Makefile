CFLAGS=-Wall -g -DNDEBUG


all: clean ten twenty thirty

ten: ex1 ex3 ex5 ex6 ex7 ex8 ex9 ex10

twenty: ex11 ex12 ex13 ex14 ex15 ex16 ex17 ex18 ex20

thirty: ex24 ex25

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex5
	rm -f ex6
	rm -f ex7
	rm -f ex8
	rm -f ex9
	rm -f ex10
	rm -f ex11
	rm -f ex12
	rm -f ex13
	rm -f ex14
	rm -f ex15
	rm -f ex16
	rm -f ex17
	rm -f ex18
	rm -f ex20
	rm -f ex24
	rm -f ex25
