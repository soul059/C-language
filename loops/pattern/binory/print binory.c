#include<stdio.h>

int main()
{
    
    int a,n,d;

    scanf("%d", &n);

    for(a=1;a<=n;a++){

        for(d=1;d<=a;d++){

            if((a + d) % 2 == 0)
                printf("1");
            else
                printf("0");
                
            }

        
        
        printf("\n");
    }
    
    return 0;
}