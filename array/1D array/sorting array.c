#include <stdio.h>
int main()
{
    int a[100];
    int n,i;

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
        for(int j=0;j<n;j++)
        {
            if (a[i]>a[j])
            {
                int tamp= a[i];
                a[i] = a[j];
                a[j]= tamp;
            }
        }
    }
    printf("sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}