#include<stdio.h>

void zigzeg(int n)
{
    if(n==0) return;
    printf("%d ",n);
    zigzeg(n-1);
    printf("%d ",n);
    zigzeg(n-1);
    printf("%d ",n);
    return;
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    zigzeg(n);
}