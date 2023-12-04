#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef union x
{
    int no;
    char ch[10];
    int price;
} x;
int main()
{

    x a;
    strcpy(a.ch,"hello");
    printf("%s",a.ch);
    a.no = 1231;
    printf("%d",a.no);
    a.price = 210;
    printf("%d",a.price);
    return 0;
}