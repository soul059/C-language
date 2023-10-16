#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("enter");
    scanf("%d",&n);

    int nsp=0;
    int nst = n*2 -1;

    for(i=1;i<=n;i++)
    {
        
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp++;
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        nst = nst -2;
        printf("\n");
        
    }
    return 0;
}