#include<stdio.h>

void PreInPost(int n)
{
    if(n==0) return;
    printf("pre %d\n",n);
    PreInPost(n-1);
    printf("in %d\n",n);
    PreInPost(n-1);
    printf("post %d\n",n);
    
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    PreInPost(n);
}