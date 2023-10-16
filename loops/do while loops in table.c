/*  this is multiplication table program 
    writen by keval
    date 30-8-2023          
*/
#include<stdio.h>

 
int main(){

    int a;

    printf("type a number which you want to multiplication table\n");
    scanf("%d", &a);

    printf("\a\n");

    int k=0;

    do{

        printf("%d x %d = %d\n",a, k+1 , a*(k+1));
        k = k +1;

    }while(k<10);

    printf("\n");


    printf("thank you");



    return 0;




}