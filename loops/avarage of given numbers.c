#include <stdio.h>

int main(){

    int n,i;
    printf("enter the number that much numbers you want to do average :");
    scanf("%d", &n);

    i=1;
    int s,sum=0;

    while(i<=n){
        scanf("%d", &s);
        sum = sum +s;
        i++;

    }
    printf("your average is :%d",sum/n);

    return 0;

}