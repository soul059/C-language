#include <stdio.h>


int main()
{
    int a;

    printf("hello sir \n");
    printf("enter dayes \n");
    scanf("%d", &a);

    int b = a/365 , c = (a%365)/30 , e = (c%365)%30;

    if(a < 30){

        printf("days %d", a );

    }

    else if(a==365){

        printf("your year is 1 months 0 and days 0\n");
    }

    else if(a==366){

        printf("this is your leep year\n");
    }
    else{

        printf("your year is %d months %d and days %d\n", b , c , e );
        printf("thank you");
    }


    printf("thanks");

    return 0;



}
