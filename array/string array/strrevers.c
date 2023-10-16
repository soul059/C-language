#include<stdio.h>
#include<string.h>
int main()
{

    char str[100];
    gets(str);
    puts(str);

    int l = strlen(str)-1;
    int i=0;
    
    while(i<=l)
    {
        char tamp = str[l];
        str[l]=str[i];
        str[i] =tamp;
        i++;
        l--;
    }

    printf("%s",str);

    return 0;
}