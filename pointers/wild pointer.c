#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int n = 3;
    int* ptr; // this is wild pointer
    
    *ptr = 3; // this is not good thing to do

    ptr = &n; // no longer wild pointer
    return 0;
}