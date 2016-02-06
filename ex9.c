#include <stdio.h>

int main(int argc, char *argv[]) {
	int numbers[4] = {1};
	char name[4] = {'a'};

	//print them raw
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n", 
		name[0], name[1], name[2], name[3]);
		
	printf("name: %s\n", name);
	
	//setup the numbers
	numbers[0] = 'Z';
	numbers[1] = 'e';
	numbers[2] = 'd';
	numbers[3] = '\0';
	
	//setup the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'B';
	
	//print them out initialized
	printf("numbers: %d %d %d %d\n", 
		numbers[0], numbers[1],
		numbers[2], numbers[3]);
		
	printf("name each: %c %c %c %c\n", 
		name[0], name[1], name[2], name[3]);
	
	//print the name as a string
	printf("name: %s\n", name);
	
	// another way to use name
	char *another_name = "Andrea";
	
	printf("another name: %s\n", another_name);
	
	printf("another each: %c %c %c %c\n", 
		another_name[0], another_name[1],
		another_name[2], another_name[3]);
		
	return 0;
}
