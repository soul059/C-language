#include <stdio.h>

int main(){

    int a , b;

    printf("hello student \n\n");
    printf("if you score 90+ in maths exam enter 1\n");
    printf("if you score 80+ in maths exam enter 2\n");
    printf("if you score 70+ in maths exam enter 3\n");
    printf("if you score 60+ in maths exam enter 4\n");
    printf("if you score <=50 in maths exam enter 5\n");

    scanf("%d", &a);

    printf("if you score 90+ in scence exam enter 1\n");
    printf("if you score 80+ in scince exam enter 2\n");
    printf("if you score 70+ in scince exam enter 3\n");
    printf("if you score 60+ in scince exam enter 4\n");
    printf("if you score <=50 in scince exam enter 5\n");

    scanf("%d", &b);

    if(a==1 && b==1){

        printf("very good you done gerat in exam you will get 900$ \n\n");
    }
    else if(a==2 && b==2){

        printf("very good you done gerat in exam you will get 750$ \n\n");
    }
    else if(a==3 && b>2){

        printf("very good you done gerat in exam you will get 400$ \n\n");
    }
    else if(a>=1 && a<4 && b>2 && b<5){

        printf("good you will get 50$ \n\n ");
    }
    else if(a==5 && b==5){

        printf("batter luck next time \n\n ");
    }
    else if(a>=3 && a<5 && b>1){

        printf("good you will get 10$ \n\n ");
    }
    else{

        printf("your input is incroecrt");
    }

    return 0;


}
