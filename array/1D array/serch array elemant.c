#include <stdio.h>
int main()
{
    int a[100];
    int n,i,b;

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

    printf("entered number that you want to find: \n");
    scanf("%d",&b);

    for(i=0;i<n;i++)
    {
        
        if(a[i]==b)
        {
            printf("\nthe entered element found at position:%d\n",i+1);
        }
    }
    return 0;
}