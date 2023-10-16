#include<stdio.h>

int main()
{
    
    int a,b,n,d;

    scanf("%d", &n);

    for(a=1;a<=n;a++){

        for(b=1;b<=a;b++)
        printf(" ");

        for(d=n-1;d>=a;d--){
        printf("*");
        }
        printf("\n");
        
    }
    return 0;
}