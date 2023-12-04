#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

typedef struct item
{
    char name[20];
    float price;
    int quantity;
} item;
void updet(item x)
{
    x.price = 1321;
    x.quantity = 10;
}
int main()
{

    item x;
    strcpy(x.name, "laptop");
    x.price=56789;
    x.quantity=10;
    printf("Before update: \nName:%s\tPrice:%f\tQuantity:%d",x.name,x.price,x.quantity);

    updet(x);
    
    printf("\nAfter update: \nName:%s\tPrice:%f\tQuantity:%d",x.name,x.price,x.quantity);
    return 0;
}