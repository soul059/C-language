#include<stdio.h>
int main(){
   int j,row ,n;
    char a='*';
    printf("ent n");
    scanf("%d",&n);
    for( row=1; row<=n; row++){
        
        
        for(j=1;j<=row;j++)
        printf("%c ",a);

       printf("\n"); 
    }

    return 0;
}