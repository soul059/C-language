#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int bitand(int n,int k)
{
    int c=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i&j)<k)
            {
                if((i&j)>c)
                c = i&j;
            
            }
        }
    }
    return c;
    
}
int bitxor(int n,int k)
{
    int c=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i^j)<k)
            {
                if((i^j)>c)
                c=i^j;
            }
        }
    }
    return c;
    
}
int bitor(int n,int k)
{
    int c=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i|j)<k)
            {
                if((i|j)>c)
                c = i|j;
                
            }
        }
    }
    return c;
    
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  printf("%d\n",bitand(n,k));
  printf("%d\n",bitor(n,k));
  printf("%d\n",bitxor(n,k));
  
  return;
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
