#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{

    char str[100];
   
    scanf("%s",str);
    int l = strlen(str);

    for(int i=0 ; str[i] !='\0';i++)
    {
        for(int j=0;j<l-1;j++)
        {
            if(str[j]>str[j+1])
            {
                char tamp = str[j];
                str[j]=str[j+1];
                str[j+1]=tamp;
            }
        }
    }

    printf("%s",str);

    return 0;
}