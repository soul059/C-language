#include<stdio.h>


// colage wallah ep.6 1 hour par


void numbers(int n)
{
    if(n==0) return; // bace case

    printf("%d\n",n); // code this wiil work before call every time until bace case

    numbers(n-1);    // call

    printf("%d\n",n); // code this will work when it is return form bace case
    return ;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    numbers(n);
    return 0;
}