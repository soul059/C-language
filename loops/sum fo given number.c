#include<stdio.h>
 
 int main(){
    int sum=0,d,n;
    
    printf("this program is for sum of given number :");
    scanf("%d", &n);

    while(n>0){

        d = n % 10; //it gives last degit

        sum = sum + d; // it's 0 + last degit

        n = n/10;//it gives left degit

    }
    printf("%d",sum);
    return 0;
 }