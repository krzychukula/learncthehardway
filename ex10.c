#include <stdio.h>

int main(int argc, char const *argv[])
{
		//let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	//states[0] = argv[0];
	argv[0] = states[1];

	int i = 0;

	//go through each string in argv
	//why am I skipping argv[0]?
	for (i = 0; i < argc; ++i)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}


	int num_states = 6;

	for (i = 0; i < num_states; ++i)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}