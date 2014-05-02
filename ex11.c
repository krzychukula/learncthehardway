#include <stdio.h>

int main(int argc, char const *argv[])
{
	//go through each string in argv
	int i = argc - 1;
	while(i > -1){
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

	//let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = num_states; //watch for this
	while(i > 0){
		i--;
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}