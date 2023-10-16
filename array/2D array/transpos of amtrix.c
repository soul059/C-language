#include<stdio.h>

int main()
{
    int a[100][100];
    int tra[100][100];
    int n,m,i,j;
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

    printf("\n");

    for (i = 0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    for (i = 0;i<m;i++) // m is coluns
    {
        for(j=0;j<n;j++) // n is rows
        {
           tra[i][j] = a[j][i]; 
        }
    }

    for (i = 0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",tra[i][j]);
        }
        printf("\n");
    }
  

    return 0;

}