#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
int can_print_it(char ch);
void print_letters(int len, const char arg[]);

void print_arguments(int argc, const char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; ++i)
	{
		print_letters(strlen(argv[i]), argv[i]);
	}
}

void print_letters(int len, const char arg[])
{
	int i = 0;

	for (i = 0; i < len; ++i) {
		char ch = arg[i];

		if(can_print_it(ch)){
			printf("'%c' == %d \n", ch, ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch){
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char const *argv[])
{
	print_arguments(argc, argv);
	return 0;
}