#include<stdio.h>

int main()
{
    int a[100][100];
    int n,i,j;
    printf("enter n:\n");
    scanf("%d",&n);
    

    
    for (i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for (i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for (i = 0;i<n;i++) // m is coluns
    {
        for(j=i;j<n;j++) // n is rows
        {
           int tamp = a[i][j];
           a[i][j] = a[j][i];
           a[j][i] = tamp;
        }
    }

    for (i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  

    return 0;

}