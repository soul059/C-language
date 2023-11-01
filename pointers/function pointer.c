#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

void greetGmuser(int (*ptr)(int,int))
{
    printf("Good Morining User\n");
    int sum = ptr(5,5); // also we derefaracing like this
    printf("the avrage of 5 and 5 is %d",sum/2);
}
int main()
{
    int (*fptr) (int,int); // declaring a function pointer
    fptr = &sum; // creatting a function pointer
    int sum = (*fptr) (5,10);// derefaracing a function pointer
    
    printf("the sum of 5 and 10 is %d\n",sum);

    greetGmuser(fptr);
    
    return 0;
}