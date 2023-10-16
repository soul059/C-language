#include<stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}
int ncr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("enter the n : ");
    scanf("%d",&n);
    printf("enter the r : ");
    scanf("%d",&r);

    printf("%d",ncr(n,r));
    
    return 0;
}