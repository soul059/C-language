#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef union age
{
    char name[20];
    char year[10];
} age;

int main()
{
    age a[10];
    int i,today=2023;
    for(i=0;i<2;i++)
    {
        printf("Enter the name : ");
        scanf(" %s",a[i].name);
        printf("\nenter birth date in dd-mm-yyyy formate");
        scanf(" %[^\n]s",a[i].year);
        if(today - atoi(&a[i].year[6]) < 18)
        {
            printf("your birth date id %s\n",a[i].year);
        }
        else if(today - atoi(&a[i].year[6]) > 60)
        {
            printf("Old person\n");
        }
        else 
        {
            printf("you birth yesr is %d\n", atoi(&a[i].year[6]) );
        }
    }
    
    return 0;
}