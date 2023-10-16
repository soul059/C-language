#include<stdio.h>
int main() 
{
    int a[100],n,i;
    int sum = 0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        printf("\n Enter element %d",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n;i++)
    {
        printf("\n Entered is :%d",a[i]);
        sum = sum + a[i];
    }
    printf("\n Sum of elements in an array:%d ",sum );
    float average= (float)sum/n;
    printf("\n Average value of all numbers: %.2f",average);
    return 0;
}
    