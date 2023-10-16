#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the matrix rows :");
    scanf("%d",&n);
    printf("enter the matrix coluns :");
    scanf("%d",&m);
    int a[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = m-1;
    int tne = n*m;
    int count = 0;

    //sprial code
    while(count<tne)
    {
        //for min couln to max colun
        for(int j = minc;j<=maxc && count<tne ;j++)
        {
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        // for max colun to max row
        for(int i=minr;i<=maxr && count<tne ;i++)
        {
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tne ;j--)
        {
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne ;i--)
        {
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}