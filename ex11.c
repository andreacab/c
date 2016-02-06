#include <stdio.h>

int main(int argc, char*argv[]) {
	
	int i = 0;
	
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	
	char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

	i = 0;
	int num_states = 4;
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	// extra credit: copy argv into states
	i = 0;
	while(i < num_states) {
		states[i] = argv[i];
		printf("states %d: %s\n", i, states[i]);
		argv[i] = "changed!";
		printf("states/argv %d: %s/%s\n", i, states[i], argv[i]);
		i++;
	} 
	
	return 0;
}
