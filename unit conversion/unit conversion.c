#include <stdio.h>

int main(){

    int i;

    printf("for continue press 1\n");
    scanf("%d", &i);
    
    conversion:

    for(i=0;i<2;i++){

        int a;

        printf("hello mr./ms. this is for unit conversion\n\n");

        printf("type 1 for conversion of Celsius to Fahrenheit\n");
        printf("type 2 for conversion of kilometers to miles\n");
        printf("type 3 for conversion of kilogram to pounds\n");


        scanf("%d", &a);

    

        if(a==1){

            float c,f;

            printf("this program is for unit converesion of Fahrenheit to Celsius\n\n");
            printf("type the Celsius\n\n ");

            scanf("%f", &c);

            f = (c*9)/5+32;

            printf("your Fahrenheit is= %f\n\n",f);
            break;
         
        }
        else if(a==2){

            float h,d;

            printf("enter the number of kilometer\n\n\n");
            scanf("%f", &h);

            d = h/1.609344;

            printf("your conversion of miles is= %f\n\n",d);

            break;
        }
    
        else if(a==3){

            float k,p;

            printf("enter the value of kilograme\n\n");
            scanf("%f", &k);

            p = 2.20462262*k;

            printf("value of pound is= %f",p);
            break;
        }
    
        else{

            printf("sorry you entered wrong unit\n\n");
            continue;
        }
    }

    printf("if you whant to do this program agin press 1\n");
    scanf("%d", &i);

    if(i==1){

        goto conversion;
    }
    else{

        printf("thank you");
    }

}