#include<stdio.h>
#include<string.h>

int main()
{
    char str[30]="123456789";
    int i,j;
    int l = strlen(str);
    j=l-1;
    i=0;

    while(i<l/2+1)
    {
        printf("%*.*s",5,i+1,&str[i]);
        
        strrev(str);
        
        printf("%*.*s",-5,i,&str[j]);
        printf("\n");

        strrev(str);
        j--;
        i++;
    }
    return 0;
}