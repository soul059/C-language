#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    // int n;
    // printf("enter the how many charter in employee ID for employee 1: ");
    // scanf("%d",&n);

    // char* ptr = (char*) malloc(n*sizeof(char));
    // printf("enter employee ID :  ");
    // scanf(" %[^\n]s",ptr);
    // printf("\nthe entered employee 1 id is:%s\n\n",ptr);

    // printf("enter the how many charter in employee ID for employee 2: ");
    // scanf("%d",&n);
    // ptr = (char*) realloc(ptr,n*sizeof(char));

    // printf("enter employee ID :  ");
    // scanf(" %[^\n]s",ptr);
    // printf("\nthe entered employee 2 id is:%s\n\n",ptr);

    // free(ptr);



    // OR


    int n;
    int i=0;
    while(i<3)
    {
        printf("enter the how many charter in employee ID for employee %d: ",i+1);
        scanf("%d",&n);

        char* ptr = (char*) malloc(n*sizeof(char));
        printf("enter employee ID :  ");
        scanf(" %[^\n]s",ptr);
        printf("\nthe entered employee %d id is:%s\n\n",i+1,ptr);
        free(ptr);
        i++;
    }
    return 0;
}