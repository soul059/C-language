#include<stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    int nsp = 1;
    int nst = n-2;
    int abc=2;
    for(int f=0;f<n*2-1;f++)
    {
        if(n>f)
        {
            printf("%c",65+f);
        }
        else if (n<=f)
        {
            printf("%c",(65+f-abc));
            abc+=2;
        }
        
        

    }
    printf("\n");

    for(int i=1;i<n;i++)
    {
        for(int j = 0;j<=nst;j++)
        {
            printf("%c",65+j);
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp+=2;
        for(int j = nst;j>=0;j--)
        {
            printf("%c",65+j);
        }
        nst--;
        printf("\n");
    }

    return 0;
}