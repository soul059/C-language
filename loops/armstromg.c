#include<stdio.h>
 
 int main(){
    int sum=1,d,n,c=0,i;
    
    printf("this program is for sum of given number :");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        while(i>0)
        {
            d = i % 10; //it gives last degit
            sum =1;
            for(int j=1;j<=3;j++)
            sum = sum * d;

            i = i/10;//it gives left degit
            c = c + sum;

            if(c==i)
            {
                printf("%d",c);
                c=1;
            }
        }
    }
    
    
    return 0;
 }