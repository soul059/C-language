#include<stdio.h>
#include<string.h>

int sum(int a)
{
    int n,c=0;
    if(a==0) return 0;
    n = a%10;
    c=n+sum(a/10);

    return c; 
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}  