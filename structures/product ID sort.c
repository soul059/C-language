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
void sort(pr p[],int n)
{
    pr temp;
    for(int i=0 ; i<n-1 ;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(strcmp(p[j].name,p[j+1].name)>0)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
int main()
{
    pr x[10];
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

    sort(x,n);

    printf("This is sorted products");
    for (int k = 0;k < n;k++){
        printf("\nProduct_ID:%s\tName:%s\tPrice:%f",x[k].id,x[k].name,x[k].price);
    }

    return 0;
}