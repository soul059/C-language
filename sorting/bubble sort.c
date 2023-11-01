#include<stdio.h>
#include<stdbool.h>

int main()
{

    int n;
    int a[10];
    printf("Enter the number of elements in array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    // bubble sort
    for(int i=0;i<n-1;i++)
    {
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }



    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}