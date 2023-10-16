#include<stdio.h>

int stare(int n)
{
    if (n==1 || n ==2 ){
        return n;
    }
    if (n==3) return n+1;
    return stare(n-1) +stare(n-2) + stare(n-3);
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("%d",stare(n));
    return 0;
}