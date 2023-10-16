#include<stdio.h>

int stare(int n)
{
    if (n==1 || n ==2){
        return n;
    }
    return stare(n-1) +stare(n-2);
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",stare(n));
    return 0;
}