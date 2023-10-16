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
    int n,a,b,i;
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
    printf("give the index which you want to do revers: \n");
    scanf("%d", &a );
    scanf("%d", &b );

    revers_a_part(arr,a,b);
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}