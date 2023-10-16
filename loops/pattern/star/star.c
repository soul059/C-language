#include<stdio.h>

int main(){

    char a= '*';
    int b,i;
    printf("enter the number that many times you need * pattern\n\n");
    scanf("%d", &b);


    for(i=0;i<=b;i++){
        if(i==1||i==3||i==4){
            printf("\n");
        }
        printf("%c",a);
        

        
    }

    return 0;
}