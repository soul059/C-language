#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    char str[30]="c progriming language";
    int i,j;
    int l = strlen(str);
    j=l;
    i=1;

    while(i<j)
    {
        printf("%.*s\n",i,str);
        i++;
    }

    while(j>0)
    {
        printf("%.*s\n",j,str);
        j--;
    }

    return 0;
}
