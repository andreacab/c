#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 0;
	
	if(argc == 1) {
		printf("You have only one argument zou suck!");
	} else if(argc > 1 && argc < 4) {
		printf("Your arguments:\n");
		
		for(i = 0; i < argc; i++) {
			printf("%s\n", argv[i]);
		
		}
	} else {
		printf("You have too many arguements!!");
	}
	
	return 0;
}
