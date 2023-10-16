#include<stdio.h>
#include<string.h>

void datoz(char a[],char b[],char c[])
{
    int k=0,j=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i] >= 65 && a[i] <=122)
        {
            c[k]= a[i];
            k++;
        }
        else 
        {
            b[j]= a[i];
            j++;
        }
    }
    return;
}
int main()
{

    char a[50];
    char b[50];
    char c[50];
    scanf("%[^\n]",a);
    printf("You entered: %s\n",a);

    datoz(a,b,c);

    puts("finel result is:");
    puts(a);
    puts("the alpabat is:");
    puts(c);
    puts("the rendom is:");
    puts(b);

    return 0;
}