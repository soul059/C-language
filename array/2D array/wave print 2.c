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



//important

    int k=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2!=0)
            {
                printf("%d ",a[i][j]);
            }
            
            else{
                printf("%d ",a[k][j]);
            }
        }
        k++;
            
        printf("\n");
    }

    return 0;
}