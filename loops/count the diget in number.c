#include<stdio.h>

int main()
{
    int i,n,dig=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
       n=n/10;
        dig++;
        
    }
    printf("%d",dig);
    return 0;
}