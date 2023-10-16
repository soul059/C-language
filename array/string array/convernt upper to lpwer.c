#include<stdio.h>
#include<string.h>

void utol(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i] >= 65 && a[i] <=90)
        {
            a[i]= a[i] + 32;
        }
        else if(a[i] >= 97 && a[i] <=122)
        {
            a[i]= a[i] -32;
        }
    }
    return;
}
int main()
{

    char a[50];
    scanf("%[^\n]",a);
    printf("You entered: %s\n",a);

    utol(a);

    puts("finel result is:");
    puts(a);
    return 0;
}