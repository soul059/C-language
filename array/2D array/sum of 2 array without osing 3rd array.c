#include<stdio.h>

// we can do this for nxm matrix

int main()
{
    int a[][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int b[][3]= {{1,2,3},{4,5,6},{7,8,9}};
    

    for(int i= 0;i<3;i++)
    {
        for(int j=0;j<3;j++ )
        {
            a[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    for(int i= 0;i<3;i++)
    {
        for(int j=0;j<3;j++ )
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}