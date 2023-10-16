#include<stdio.h>

int main(){

    int a,b,c,d;

    printf("enter the days=");
    scanf("%d", &a);

    b = a/365;
    c = (a%365)/30;
    d = (a%365)%30;

    printf("years is =%d,monts is=%d and days is=%d\n",b,c,d);

    return 0;
}