#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    char a[10]= "09 02 2006";
    int x = atoi(&a[6]);
    printf("%d",x);
    return 0;
}