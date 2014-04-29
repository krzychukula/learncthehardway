#include <stdio.h>

int main(int argc, char *argv[]){
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Krzysztof";
	char last_name[] = "Kula";

	printf("You are %d miles away.\n", distance);
	printf("With zeros %05d\n", distance);
	printf("Hex %#x\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("Formatted: %5.2f\n", super_power);
	printf("printing character %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("empty %s.\n", "");
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %s. \n", first_name, last_name);

	return 0;


}