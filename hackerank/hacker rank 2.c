#include<stdio.h>
#define MAX 100
int main() {
    char ch;
    char s[MAX];
    char sen[MAX];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]",sen);
    

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    return 0;
    }