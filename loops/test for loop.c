#include<stdio.h>
int main(){
    int a,j;

    printf("enter a ");

    scanf(" %d", &a);

    for( j=0; j<11; j++){

        printf("%d x %d = %d\n",a, j , a*j);
    }

    return 0;
}