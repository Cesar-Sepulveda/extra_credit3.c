//Cesar Sepulveda
//Date:2/20/19
//CPSC 240
//Extra Credit #3:
//Fibonacci Generator – Write a procedure that produces N values in the Fibonacci 
//number series and stores them in an array of doubleword. Input params should be 
//a pointer to an array of doubleword, a counter of the number of values to generate. 
//Write a test program that calls your procedure, passing N=47. The first value in 
//the array will be 1, and the last value will be 2,971,215,073. Use Visual Studio 
//Debugger to open and inspect the array contents.







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
		printf("%u \n", arr[i]);					//Printing the content of the array
	}

	return 0;
}
