#include<stdio.h>

int main(){
int k,n;
printf("enter n");
scanf("%d%d",&n,&k);

for(int i=1;i<=k;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
           printf("%d %d\n",i,j);
        }

    }
    return 0;
}