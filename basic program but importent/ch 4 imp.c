// Simple C program to display "Hello World"

// Header file for input output functions
#include <stdio.h>

// main function -
// where the execution of program begins
int main()
{
    int i;
    float f;

    scanf("%3d %*d %f",&i ,&f);
    
    printf("%1d - %5.3f",i,f);
	// prints hello world
	printf("Hello World");

	return 0;
}