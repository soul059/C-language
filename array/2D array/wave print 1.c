#include<stdio.h>

int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int a[n][n];

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(int i =0;i<n;i++)
    {
        if(i%2 != 0)
        {   
            for(int j =n-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}