#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%[^\n]",a);
    int l=strlen(a);

    for(int i=0;i<=l+1;i++)
    {
        if(a[i]==' ')
        {
            printf("\n");
            i+=1;
        }
        else
        printf("%c",a[i]);
    }

    return 0;
}