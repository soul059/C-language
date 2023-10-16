#include<stdio.h>

int main()
{
    int a[100][100];
    int n,m,i,j;
    int sum =0;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter m:\n");
    scanf("%d",&m);

    
    for (i = 0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    int l1,r1,l2,r2;
    printf("enter srting index\n");
    scanf("%d%d",&l1,&r1);
    printf("enter ending index\n");
    scanf("%d%d",&l2,&r2);

    for(int i= l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++ )
        {
            sum += a[i][j];
        }
        
    }

    printf("%d",sum);
    return 0;

}