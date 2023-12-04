#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef struct student{
    int id;
    char name[20];
    int marks[3];
    int total;

} std;
int main()
{
    std st[10];
    std s;
    int i,j;

    for(i=0;i<10;i++)
    {
        printf("\t\tstudent %d\n\n",i+1);
        printf("Enter student ID\n");
        scanf("%d",&st[i].id);
        printf("Enter student Name\n");
        gets(st[i].name);
        printf("Enter three subject marks\n");
        for(j=0;j<3;j++)
        scanf("%d",&st[i].marks[j]);
        st[i].total = 0;
        for(j=0;j<3;j++)
        st[i].total += st[i].marks[j];

    }
    printf("\nStudent Details:\n");
    printf("ID \tName\tMarks\tTotal Marks\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%s\t",st[i].id,st[i].name);
        for(j=0;j<3;j++)
        printf("%d ",st[i].marks[j]);
        printf("%d\n",st[i].total);
    }
    
    printf("The higest marks from all students is : \n");
    int max_mark = st[0].total;
    for (i = 0 ; i < 10 ; i++ )
    {
        if (max_mark < st[i].total)
        {
            max_mark = st[i].total;
        }
    }
    for(i=0;i<10;i++)
    {
        if(max_mark == st[i].marks)
        {
            printf("%d\t%s\t",st[i].id,st[i].name);
        }
    }
    return 0;
}