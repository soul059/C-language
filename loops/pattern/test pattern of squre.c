#include <stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-(n-1);j<=n;j++)
        {
            if(i==1||i==n)
            {
                printf("%d ",n);
            }
            else
            {
                for(k=1;k<=j;k++)
                if(i==n-(n-(k+1))||i==n-(k+1))
                {
                    if(j==n-(n-k)||j==n-k)
                    printf("%d ",n);

                    else
                    printf("%d ",n-k);
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}