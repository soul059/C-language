#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int guneretrendom()
{
    srand(time(NULL));
    int r= rand()%3;
    return r;
}


int forinput(char* a)
{
    printf("enter \nrock --> R\n    OR \npaper --> P\n    OR \nscissors --> S \nyour input :  ");
    scanf(" %c",&*a);

    if(*a=='R'|| *a=='r') return 0;
    else if(*a=='P'|| *a=='p') return 1;
    else if(*a=='S'|| *a=='s') return 2;

    return 4;
}


void forwin(int* x,int* y,int *z,int* a)
{
    if((*x==2 && *y==1) || (*x==0 && *y==2) || (*x==1 && *y==0)) //x=ai, y=player and 0=r,1=p,2=s
    {    printf("\tAI WIN"); *z+=1;}
    else if ((*x==2 && *y==0) || (*x==0 && *y==1) || (*x==1 && *y==2) ) 
    {    printf("\tPLAYER WIN"); *a+=1;}
    else
    printf("\tDRAW");
    
    return;
}

void printline()
{
    for(int i=1;i<32;i++)
    {
        printf("-");
    }
    return;
}

int main()
{
    char ch;
    int x,y,f,z=0,a=0;
    while (true){

    y = forinput(&ch);

    if(y==4) 
    {
        printf("\nINVALID INPUT!");
        exit(0);
    }
    printf("\n");

    x = guneretrendom();
    if(x==0) printf("AI --> ROCK\n");
    else if(x==1) printf("AI --> PAPER\n");
    else if(x==2) printf("AI --> SCISSORS\n");

    printf("\n");

    printline();

    forwin(&x,&y,&z,&a);

    printline();

    printf("\n\n");

    printf("\nDo you want to play again? Yes=0/No=1: ");
    scanf("%d",&f);
    if(f!=0 || f!=0) 
    {
        break;
        
    }

    }

    printf("\nPLAYER wins %d times\t",z);
    printf(" AI wins %d times\n\n", a);

    if(z>a){
        printline();
        printf("\nPlayer is the winner.");
        printline();
    }
    else if(z<a){
        printline();
        printf("\nAI is the winner.");
        printline();
    }
    else{
        printline();
        printf("\nIt's a tie.");
        printline();
    }

    // system("cls");

    
    return 0;
}