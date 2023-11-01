#include<stdio.h>

int main()
{
    int a = 2;
    int b = 9;
    int* x = &a;
    int* y = &b;

    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*x);

// for the addrace ther is function spacifaer %p

    printf("the addrace of a is %p\n",&a); 
    printf("the addrace of a is %p\n",x);
    printf("the addrace of x is %p\n",&x);

}