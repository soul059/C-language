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

    int max=a[0][0],min=a[0][0];

    int pos1;
    int pos2;
    int pos_1;
    int pos_2;

    for (i = 0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<a[i][j])
            {
                max = a[i][j];
                pos1 = i;
                pos2 =j;

            }
            if(min>a[i][j])
            {
                min = a[i][j];
                pos_1 = i;
                pos_2 =j;
            }
        }
    }
    printf("the max is %d and min is %d\n\n",max,min);
    printf("the index of max is (%d,%d) and index of min is (%d,%d)\n",pos1,pos2,pos_1,pos_2);

    return 0;

}