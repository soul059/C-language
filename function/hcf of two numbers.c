#include<stdio.h>

int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}

int hcf(int a,int b)
{
    int hcf;
    for(int i=min(a,b);i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a,b,hcfab;
    printf("enter the number a: ");
    scanf("%d",&a);
    printf("enter the number b: ");
    scanf("%d",&b);

    hcfab = hcf(a,b);
    printf("hcf of %d and %d is %d",a,b,hcfab);
}