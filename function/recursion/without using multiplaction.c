#include<stdio.h>
#include<string.h>

int muil(int a,int b)
{
    
    if (b==0) return 0;
    int k = a + muil(a,b-1);
    return k;
}
int main()
{
    int a,b;
    printf("enter the number that you want to multiplay : ");
    scanf("%d",&a);
    printf("enter the number that you multipiye uith : ");
    scanf("%d",&b);

    printf("%d", muil(a,b));
    return 0;
}