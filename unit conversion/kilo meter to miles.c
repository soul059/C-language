#include <stdio.h>

int main(){

    float c,d;

    printf("enter the number of kilometer\n");
    scanf("%f", &c);

    d = c/1.609344;

    printf("your conversion of miles is= %f",d);

    return 0;

}