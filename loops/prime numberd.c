#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=2;i<=9;i++)
    {
        if(n%i !=0 || n==2)
        {
            printf("the number is prime");
            break;
        }
        else 
        {
            printf("The number is not a prime");
            break;
        }
    }
    return 0;
}