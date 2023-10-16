#include<stdio.h>

int main()
{
    int n,a[1000];
    int b[1000];

    scanf("%d",&n);

    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}