#include <stdio.h>

int main(){
	int age = 10;
	int height = 52;//to test valgrind

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	return 0;
}