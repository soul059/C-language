#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    gets(s1);
    gets(s2);

    printf("enter the number that you want to add at alst of string1");
    int n;
    scanf("%d",&n);

    int a = strlen(s1);
    int b = strlen(s2)-n;
    
    int i=a;
    int j=b;
    while(s2[j]!=0)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    puts(s1);


    return 0;
}