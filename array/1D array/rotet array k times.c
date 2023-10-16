#include<stdio.h>

void revers_a_part(int arr[],int a,int b)
{
    for(int i=a,j=b;i<=j;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
    }
    return;
}

int main()
{
    int n,k,i;
    int arr[100];
    printf("enter the size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter the how many times you want to rotet array\n");
    scanf("%d",&k);

    k = k%n; // this is very imp

    revers_a_part(arr,0,n-1);
    revers_a_part(arr,0,k-1);
    revers_a_part(arr,k,n-1);

    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}