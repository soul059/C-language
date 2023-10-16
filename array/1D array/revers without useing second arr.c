#include<stdio.h>

void revers(int a[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j]=temp;
    }
    return;
}

int main()
{
    int a[50];
    int i, n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    revers(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}