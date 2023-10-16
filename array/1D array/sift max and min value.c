#include<stdio.h>

int main()
{
    int a[100];
    int n,i,pos1=0,pos2=0,ind1,ind2;
    

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
            ind1=i;
        }
        else if(min > a[i])
        {
            min = a[i];
            pos2 = i+1;
            ind2=i;
        }
    }
    printf("this is the maxium number: %d, posion is :%d\n",max,pos1);
    printf("minimum number is : %d,posion is :%d\n",min,pos2);

    a[ind2]=max;
    a[ind1]=min;

    for(i=0;i<n;i++)
    {
        printf("finel array of number is: %d\n",a[i]);
    }

    return 0;
}