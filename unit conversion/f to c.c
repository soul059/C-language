#include<stdio.h>

int main(){

    float c,f;

    printf("this program is for unit converesion of Fahrenheit to Celsius\n\n");
    printf("type the Celsius\n\n ");

    scanf("%f", &c);

    f = (c*9)/5+32;

    printf("your Fahrenheit is= %f",f);


    return 0;


}