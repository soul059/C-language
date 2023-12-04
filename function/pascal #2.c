#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

/*

    THIS IS DANGER

--> this will not work for more then 11^5

*/


int main()
{
    int n=11,x;
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        x=pow(n,i);
        printf("%u ",x);
        printf("\n");
    }
    
    return 0;
}