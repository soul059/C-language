#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef struct travel_angency{
    char name[15];
    char license_no[15];
    char rout[20];
    int kms;
} travel;
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
    printf("enter how many dravers you have: ");
    scanf("%d",&n);
    travel a[n];
    for(int i=0;i<n;i++)
    {
        printf("\ntravel angency %d\n",i+1);
        printf("name of driver :");
        scanf(" %[^\n]s",a[i].name);
        printf("driver license NO :");
        scanf(" %[^\n]s",a[i].license_no);
        printf("rout of driver :");
        scanf(" %[^\n]s",a[i].rout);
        printf("kms driven by this driver :");
        scanf("%d",&a[i].kms);
    }

    printf("\n\nthe given details is like this\n\n");

    for(int i=0;i<n;i++)
    {
        printline();
        printf("\n\ndriver name is: %s\n",a[i].name);
        printf("\ndriver licence no is:%s\n",a[i].license_no);
        printf("\nrout of driver is:%s\n",a[i].rout);
        printf("\nkm's driven by the driver are:%d\n\n",a[i].kms);
        printline();
    }
    return 0;
}