#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        int b=64;
        for(j=1;j<=i;j++)
        {
            if(i%2 !=0)
            printf("%d",j);
            else
            printf("%c",b+j);
        }
        printf("\n");
    }
    return 0;
}