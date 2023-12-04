#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

typedef struct product
{
    char id[20];
    char name[20];
    float price;
} pr;
void serch(pr *p,char c[],int n)
{
    for(int i=0 ; i<n ;i++)
    {
        if(strcmp(c,p->id)==0)
        {
            printf("Product Name is %s",p->name);
            printf("\tPrice is RS %.2f\n",p->price);
        }
        p++;
    }
}
int main()
{
    pr x[10];
    char i[20];
    int n;
    printf("Enter the number of products:");
    scanf("%d",&n);
    for (int j = 0;j < n;j++){
        printf("Enter Product ID : ");
        scanf(" %[^\n]s",x[j].id);
        printf("Enter Product Name : ");
        scanf(" %[^\n]s",x[j].name);
        printf("Enter Price : ");
        scanf("%f",&x[j].price);
    }
    printf("Enter the Product Id to search : ");
    scanf(" %[^\n]s",i);
    serch(x,i,n);

    return 0;
}