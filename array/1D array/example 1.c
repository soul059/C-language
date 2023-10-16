#include<stdio.h>
int main() 
{
    int a[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter the value of element %d : \n", (1+i));
        scanf("%d", &a[i]);
    }
    for(int i=0;i<=4;i++)
    printf("index of array %d and value of array is %d\n",i,a[i]);
    return 0;
}
