#include <stdio.h>

int main(){
    int a,b=1,n;
    printf("eter the number that you want to do factorial\n");
    scanf("%d", &a);
    if(a==0)
        printf("1");
    else if (a==1)
        printf("1");
    else{

        for(n=2;n<=a;n++){

            b=b*n;
            
        }
        printf("%d",b);
    }
        
}