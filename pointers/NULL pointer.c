#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int n= 10;
    int* ptr;
    ptr = NULL;
    ptr = &n;// this is comment

    if(ptr!=NULL)
    {
        printf("pointer is not a null pointer the value of n is %d",*ptr);
    }
    else
    {
        printf("pointer is a null pointer");
    }
    return 0;
}