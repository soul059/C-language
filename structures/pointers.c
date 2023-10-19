#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct book
{
    char name[20];
    int price;
}book;
void fun(book *b)
{
    (*b).price = 120;
    strcpy(b->name,"46 lows of power");
    return;
}
void print(book *b)
{
    printf("Name : %s\n",(*b).name);
    printf("Price: %d\n",b->price);
    return;
}

int main()
{
    book n1;
    fun(&n1);
    print(&n1);
    
    return 0;
}