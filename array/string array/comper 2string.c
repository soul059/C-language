#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    gets(s1);
    gets(s2);

    int i=0,count=0;

    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]==s2[i])
        {
            count++;
        }
        else count=0;
        i++;
    }
    if(count==i)
    {
        printf("Strings are same");
    }
    else
    {
        printf("string are not same");
    }

    return 0;
}