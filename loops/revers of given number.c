#include<stdio.h>
 
 int main(){
    int rev=0,d,n;
    
    printf("this program is for sum of given number :");
    scanf("%d", &n);

    while(n>0){

        d = n % 10; //it gives last degit

        rev = rev*10 + d; // it's (0 x 10) + last degit

        n = n/10;//it gives left degit

    }
    printf("%d",rev);
    return 0;
 }