#include<stdio.h>

int palindrome(int a[],int n)
{
    int count;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==a[j])
        {
            count=0;
        }
        else
        {
            return 0;
        }
    }
    if(count==0)
    return 1;

    return 0;
}

int main()
{
    int a[50];
    int i, n,c;
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
    c = palindrome(a,n);
    if(c==1)
    printf("The given array is Palindromic\n");
    else
    printf("The given array isn't Palindromic\n");

    return 0;
}