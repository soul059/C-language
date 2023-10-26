#include<stdio.h>

int main()
{
    int n,m,p,q;
    printf("enter the 1st matrix rows :");
    scanf("%d",&n);
    printf("enter the 1st matrix coluns :");
    scanf("%d",&m);
    int a[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n enter the 2nd matrix row:");
    scanf("%d",&p);
    printf("enter the 2nd matrix coluns :");
    scanf("%d",&q);
    int b[p][q];
     for(int i = 0;i<p;i++)
    {
        for(int j = 0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    if(n!=p)
    {
        printf("given type of matrix cant multiplaid\n");
    }
    else
    {
        //muiltiplaction
        int res[m][q];
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+= a[i][k]*b[k][j];
                }
            }
        }

        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }

    }

    return 0;
}