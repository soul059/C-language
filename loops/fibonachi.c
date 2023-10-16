#include <stdio.h>
int main(){
    int a,b,n,c,i;
    a=0;
    b=1;
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=3;i<=n;i++)
    {
        c = a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    

}
