#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14
float Edistion(int x1,int y1,int x2,int y2)
{
    float dis = sqrt(pow(x2-x1,2)) + (pow(y2-y1,2));
    return dis;
}
float areaOfCricle(int x1,int y1,int x2,int y2,float (*fptr)(int,int,int,int))
{
    float area = pow(fptr(x1,x2,y1,y2),2) * PI;
    return area;
}
int main()
{
    int x1,y1,x2,y2;
    printf("enter X1 : ");
    scanf("%d",&x1);
    printf("\nenter Y1 : ");
    scanf("%d",&y1);
    printf("\nenter X2 : ");
    scanf("%d",&x2);
    printf("\nenter Y2 : ");
    scanf("%d",&y2);

    float (*ptr)(int,int,int,int);
    ptr = &Edistion;
    float result = areaOfCricle(x1,y1,x2,y2,ptr);
    printf("the area of cricle is %f",result);
    
    return 0;
}