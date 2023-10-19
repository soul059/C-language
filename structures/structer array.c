#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct student
    {
        char name[40];
        int roll;
        int marks;
    } student;
    
    student arr[20];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        printf("\n\tStudent %d:\n", (i+1));
        printf("\tName :");scanf(" %[^\n]s",arr[i].name);
        printf("\tRoll No.:");scanf("%d",&arr[i].roll);
        printf("\tTotal Marks  :");scanf("%d",&arr[i].marks);
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\t Name : %s",arr[i].name);
        printf("\t Roll : %d",arr[i].roll);
        printf("\t Total Marks : %d",arr[i].marks);
    }
    return 0;
}