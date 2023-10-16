#include <stdio.h>
int main(){
    int a,b,n,c,i;
    a=1;
    b=1;
    c=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        if(i==1 || i==2)
        printf("%d\t",b);
        else if(i==0)
        printf("%d\t",c);
       else
       { 
        c = a+b;
        a=b;
        b=c;
        printf("%d\t",c);}
    }
    

}