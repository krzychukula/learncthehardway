#include <stdio.h>

int main(){
	int age = 10;
	int height;//to test valgrind

	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);

	return 0;
}