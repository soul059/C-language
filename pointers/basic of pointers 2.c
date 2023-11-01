#include<stdio.h>
// sawap of two numbers
void change(int* x,int* y)// here x and y are pointers of a and b
{
    int temp;
    temp = *x;
    *x = *y;     // *x is a and *Y is b
    *y = temp;

    /*        OR
        *x = *x +*y;
        *y = *x -*y;
        *x = *x - *y;
    */

    return ;

}
int main()
{
    int a,b;
    printf("Enter the a: ");
    scanf("%d",&a);
    printf("Enter the b: ");
    scanf("%d",&b);

    change(&a,&b);

    printf("a is %d\n",a);
    printf("b is %d\n",b);
}

// &a desplay the addrace of a