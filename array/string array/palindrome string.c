#include<stdio.h>
#include<string.h>
int main()
{

    char a[50];
    scanf("%[^\n]",a);
    int l = strlen(a)-1;
    int mat =0,i;

    for(i=0;i<l;i++,l--)
    {
        if(a[i]==a[l])
        {
            mat=0;
        }
        else mat++;
    }

    if(mat==0)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome\n");
    }

    return 0;
}
