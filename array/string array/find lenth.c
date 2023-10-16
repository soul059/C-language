#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    int i=0;
    while(i>=0)
    {
        if(a[i]=='\0')
        break;
        i++;
    }
    printf("The length of the string is %d\n",i);
    return 0;
}