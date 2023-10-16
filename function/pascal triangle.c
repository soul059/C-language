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
    int n;
    printf("enter the n : ");
    scanf("%d",&n);

    int nsp=n-1;

    for(int i=0;i<=n;i++)
    {
        for(int k = 0;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",ncr(i,j));
        }
        printf("\n");
    }
    
    return 0;
}