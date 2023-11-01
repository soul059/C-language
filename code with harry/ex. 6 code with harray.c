#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
void parser(char a[])
{

    int i=0;
    int st,ind=0;
    // for removing HTML hader
    while (a[i]!='\0')
    {
        if(a[i]=='<')
        {
            st=0;
            i++;
            continue;
        }
        else if (a[i]=='>')
        {
            st=1;
            i++;
            continue;
        }
        if(st==1)
        {
            a[ind]=a[i];
            ind++;
        }

        i++;
    }
    a[ind]='\0';

    // for removing first white space form string
    
    while(a[0]==' ')
    {
        strcpy(a,&a[1]);
    }

    // for removing last white space form string

    while(a[strlen(a)-1]==' ')
    {
        a[strlen(a)-1] = '\0';
    }


    return;

}

int main()
{
    char str[]="<h1>           hello sir this   is it           </h1>";
    

    parser(str);

    printf("\n\nthe last string is ~~%s~~\n\n",str);
    
    return 0;
}