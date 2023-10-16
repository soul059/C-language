#include<stdio.h>

int main()
{
    int a[100];
    int n,i,pos1=0,pos2=0;
    

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

    int max=a[0];// asum that a[0] is max value
    int min=a[0];// asum that a[0] is min value

    for(i=0;i<n;i++)
    {
        

        if (max < a[i]) // if max less than current element then update it with new max
        {
            max = a[i];
            pos1 = i + 1;
        }
        else if(min > a[i])
        {
            min = a[i];
            pos2 = i+1;
        }
    }
    printf("this is the maxium number: %d, posion is :%d\n",max,pos1);
    printf("minimum number is : %d,posion is :%d\n",min,pos2);

    return 0;
}