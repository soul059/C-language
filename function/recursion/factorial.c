#include<stdio.h>
int factorial(int n);
int main() 
{
    int num;
    printf("Enter the number to find its Factorial: ");
    scanf("%d",&num);
    printf("the factorial of number %d is %d",num,factorial(num));
    return 0;
}


int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return (n * factorial(n-1));
    }
}