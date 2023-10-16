#include<stdio.h>

void tower(int n,char s,char h,char d)
{
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c --> %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}

int main()
{
    int n;
    printf("enter the ring number: ");
    scanf("%d",&n);

    tower(n,'A','B','C');
    return 0;
}