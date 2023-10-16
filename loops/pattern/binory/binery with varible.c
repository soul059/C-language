#include <stdio.h>

int main()
{
    int i,j,a,n;
    printf("enter\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)           //taking care of number of lines
    {
        if(a%2 == 0) a=0; //start only first line
        else a=1;

        for(j=1;j<=i;j++)
        {
           printf("%d ",a);

           if(a==0) a=1; // change of value of varible a
           else a=0;
        }
        printf("\n");
    }
        

    return 0;
}