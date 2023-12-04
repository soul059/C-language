#include<stdio.h>
#define PI 3.14 // this is macro


int main()
{
    printf("the time is %s\n",__TIME__); // this is pre define macro.

    printf("this is today date %s\n",__DATE__);
    
    return 0;
}

/*

// C Program to illustrate function like macros
#include <stdio.h>

// macro with parameter
#define AREA(l, b) (l * b)

int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}

*/