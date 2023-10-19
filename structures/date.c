#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool flag = true;
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;
    a.day = 12;
    a.month=5;
    a.year=2018;

    b.day = 3;
    b.month=6;
    b.year=2019;

    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if( flag == true) printf("date are same");
    else printf("dats are not same");
    
    return 0;
}