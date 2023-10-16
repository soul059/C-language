#include<stdio.h>

int main()
{
    int n,a,b,min=0;
    printf("enter\n");
    scanf("%d",&n);

    for(int i=1 ; i<=2*n-1 ; i++)
    {
        for(int j=1 ; j<=2*n-1 ; j++)
        {
            a=i;

            if(a>n)  a=2*n -i;
            
            b=j;

            if(b>n)  b=2*n -j;
            
            if(a<b) min =a;
            else min=b;
            
            printf("%d",min);
        }
        printf("\n");
    }
    return 0;
}