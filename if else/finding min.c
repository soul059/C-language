#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter the first number :");
    scanf("%d", &a);

    printf("enter the second number :");
    scanf("%d", &b);
    
    printf("enter the thard number :");
    scanf("%d", &c);

    if(a<b){
        if(a<c)
            printf("%d is minimum number",a);
        else 
            printf("%d is minimum number",c);
    }
    else{
        if(b<c)
            printf("%d is minimum number",b);
        else
            printf("%d is minimum number",c);
    }
    
    return 0;
}