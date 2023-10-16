#include<stdio.h>
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);

    int nsp= n-1;
    int nst=1;

    for(int i=1;i<=n;i++)
    {
        int a=i-1;
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j =1;j<=nst;j++)
        {
            printf("%d",j);
        }
        nst++;
        nsp--;
        for(int j = 1;j<=i-1;j++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}