#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef struct student_info{
    char name[25];
    int roll;
} std;
void printline()
{
    for(int i=1;i<=30;i++)
    {
        printf("-");
    }
    return;
}
int main()
{
    int n;
    printf("enter how many students in class: ");
    scanf("%d",&n);
    std a[n];
    FILE *ptr = NULL;
    ptr = fopen("studentinfo.txt", "w");
    // for(int i=0;i<n;i++)
    // {
    //     printf("\nstudent %d\n",i+1);
    //     printf("name of student :");
    //     scanf(" %[^\n]",a[i].name);
    //     fprintf(ptr, "%s" , a[i].name);
    //     printf("enter the roll no. :");
    //     scanf("%d", &a[i].roll);
    //     fprintf(ptr, "%d", a[i].roll);
    // }

    // printf("\n\nthe given details is like this\n\n");

        for(int i=0;i<n;i++)
    {
        printline();
        fscanf(ptr, " %[^\n]",a[i].name);
        printf("student name is:%s\n",a[i].name);
        fscanf(ptr, "%d", &a[i].roll);
        printf("roll no.:%d\n\n",a[i].roll);
        printline();
    }
    return 0;
}