#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("entr");
    scanf("%d",&n);

    int nsp = n-1;
    int nst = 1;

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(j=1;j<=nst;j++)
        {
            printf("%d",j);
        }
        nst = nst +2;
        printf("\n");
    }
    return 0;
}