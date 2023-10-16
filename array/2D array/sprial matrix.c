#include<stdio.h>
int main()
{
    int n;
    printf("enter the matrix rows and colens :");
    scanf("%d",&n);
    int a[n][n];

    printf("\n");

    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int tne = n*n;
    int count = 0;

    int k=1;

    //sprial code
    while(count<tne)
    {
        //for min couln to max colun
        for(int j = minc;j<=maxc && count<tne ;j++)
        {
            a[minr][j]=k;
            count++;
            k++;
        }
        minr++;
        // for max colun to max row
        for(int i=minr;i<=maxr && count<tne ;i++)
        {
            a[i][maxc]=k;
            count++;
            k++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tne ;j--)
        {
            a[maxr][j]=k;
            count++;
            k++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne ;i--)
        {
            a[i][minc]=k;
            count++;
            k++;
        }
        minc++;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}