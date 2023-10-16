#include <stdio.h>

int main(){

    int a;

    printf("enter the number: \n");
    scanf("%d", &a);

    if(a%2==0){

        printf("your number is even\n\n");

    }
    else{
        printf("your number is odd\n\n");
    }
}