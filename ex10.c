#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 0;
	
	// print all passed argument including the name of the program
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
		if(i == 2) {
			break;	
		}
	}
	
	char *states[] = {
		"California", "Oregon",
        NULL, "Texas"
	};

	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	
	states[3] = argv[3];
	printf("argv: %s and states: %s\n", argv[3], states[3]);
	
	return 0;
}
