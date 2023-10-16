#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    gets(s1);
    gets(s2);

    int i=0;
    int match=0;
    while(s1[i]!='\0')
    {
        int k=0,count=0;
        for(int j=i;s1[j]!='\0' && s2[k]!='\0';j++)
        {
            if(s1[j]==s2[k])
            {
                count=1;
                
            }
            else 
            {
                count = 0;
                break;
            }
            k++;
        }
        if(count!=0)
        {
            match++;
            printf("index is : %d\n",i);
        }
        i++;
        
    }
    
    printf("%d",match);


    return 0;
}