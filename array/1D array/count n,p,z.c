#include <stdio.h>
int main()
{
    int a[100];
    int n,i,P=0,N=0,Z=0;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the number of index %d\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("entered number is: %d\n",a[i]);
    }

    for(i=0;i<n;i++)
    {
        
        if(a[i]>0)
        P++;
        else if(a[i]<0)
        N++;
        else
        Z++;
    }
    printf("\nPositive numbers are:%d \nNegative Numbers are :%d and zeroes are:%d ",P,N,Z );
    return 0;
}