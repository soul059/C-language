#include<stdio.h>

int main()
{
    int a[100][100];
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

    int max=a[0][0];

    int pos1;
    

    for (i = 0;i<n;i++)
    {
        int sum = 0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            sum++;
            
           
        }
        if(max<sum)
            {
                max = sum;
                pos1 = i;
            }
    }
    printf("the max no. 1 is %d and row is %d\n\n",max,pos1);
    

    return 0;

}