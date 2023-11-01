#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    char a[20];
    char b[10];
    scanf("%s",a);
    scanf("%s",b);
    int i=0,count=0;
    while(a[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            if(a[i]+32==b[i] || a[i]==b[i]+32)
            {
                count=0;
            }
            else
            {
                count=1;
            }
        }
        i++;
        
    }
    if(count==0)
    printf("string is same");
    else
    printf("string is diffrent");
    return 0;
}