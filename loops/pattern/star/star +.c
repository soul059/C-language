#include<stdio.h>
int main() 
{
    int i,j,n;

    printf("enter");
    scanf("%d",&n);
    int b;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            b= n/2 +1;// --> 5/2 + 1 = 2 + 1 =3
            
            if(i==b || j==b )
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
