#include <stdio.h>								//Including stdio.h to allow the program to use output

int main() {
	int num = 47;								//Initalizinbg variables
	int i;								
	unsigned long long add = 0;
	unsigned long long fin = 1;
	unsigned long long arr[47];					//Initializing the array

	for (i = 0; i < num; ++i) {					//Setting up a for loop
		unsigned long long t = add + fin;		
		fin = add;
		add = t;
		arr[i] = add;
	}
	printf("The  array contains: \n");			//Printing the statement
	for (i = 0; i < num; ++i) {					//For loop to print the content of the array
		printf("%u", arr[i]);					//Printing the content of the array
	}

	return 0;
}
