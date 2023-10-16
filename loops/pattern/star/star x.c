#include<stdio.h>
int main() 
{
    int i,j,n;

    printf("enter");
    scanf("%d",&n);
    int b;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            b=n+1;
            if(i==j || i+j==b)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
