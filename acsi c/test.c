#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    int sum=0;
    int a[10][10];

    for(int i = 0; i<4;i++)
    {
        sum = 0;
        for(int j =0;j<4;j++)
        {
            sum+=a[i][j];
            //a[i][j]= (1+i)*(1+j);
        }
        printf("");
    }
    return 0;
}