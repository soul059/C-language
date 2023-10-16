#include<stdio.h>

int nthsum(int a,int b,int c,int n)
{
   

    if(n==1) return a;
    else if(n==2) return b;
    else if(n==3) return c;


    int k =nthsum(a,b,c,(n-1)) + nthsum(a,b,c,(n-2)) + nthsum(a,b,c,(n-3));
    //int k = 3+2;

    return k;

}

int main()
{
    int n;
    int a,b,c;

    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    
    printf("%d\n",nthsum(a,b,c,n));
}