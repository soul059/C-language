#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

char * replaceWord (const char *str,const char *oldstring,const char *newstring)
{
    char *resultstr;
    int i,count=0;
    int newlen = strlen(newstring);
    int oldlen = strlen(oldstring);

    // count the how many times the oldword in string
    for(i=0;str[i] != '\0';i++)
    {
        if(strstr(&str[i],oldstring)==&str[i])
        {
            count++;

            // jump over the word
            i = i + oldlen -1;
        }
    }
    resultstr=(char*)malloc(i + count * (newlen - oldlen)+1);
    
    i=0;
    while(*str)
    {
        // compare the substring with result
        if(strstr(str,oldstring) == str)
        {
            strcpy(&resultstr[i],newstring);
            i+= newlen;
            str += oldlen;
        }
        else{
            resultstr[i]=*str;
            i+=1;
            str+=1;
        }
    }
    resultstr[i] = '\0';
    return resultstr;

}
int main()
{

    FILE* ptr1=NULL;
    FILE* ptr2=NULL;
    ptr1 = fopen("temp.txt","r");
    ptr2 = fopen("bill.txt","w");
    char* str = (char*)malloc(300*sizeof(char));
    fscanf(ptr1 , " %[^\n]s", str);
    
    char name[30];
    char item[50];
    char by[40];
    printf("enter the name: ");
    scanf(" %[^\n]s",name);
    printf("\n enter the item: ");
    scanf(" %[^\n]s",item);
    printf("\n enter the compney who give it : ");
    scanf(" %[^\n]s",by);

    // call the function

    char *newstr;
    newstr = replaceWord(str,"{{name}}",name);
    newstr = replaceWord(newstr,"{{item}}",item);
    newstr = replaceWord(newstr,"{{outlet}}",by);

    printf("\t\tthe bill is \n\n%s",newstr);

    fprintf(ptr2, "%s",newstr);
    fclose(ptr1);
    fclose(ptr2);
    free(str);
    return 0;
}