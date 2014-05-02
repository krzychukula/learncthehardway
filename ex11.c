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

	i = 0;
	while(i < num_states && i < argc){
		//states[i] = argv[i];
		//warning: assignment discards ‘const’ qualifier
		// from pointer target type [enabled by default]
		i++;
	}

	i = num_states; //watch for this
	while(i > 0){
		i--;
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}