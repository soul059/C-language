#include<stdio.h>
int maze(int cr, int cc, int er,int ec)
{
    int rightside =0;
    int dowenside =0;

    if (cr==er && cc ==ec)
    return 1;
    if (cr == ec)
    rightside += maze(cr,cc+1,er,ec);
    else if (cc == ec)
    dowenside += maze(cr + 1 ,cc,er,ec );
    else
    {
        rightside+=maze(cr,cc+1,er,ec);
        dowenside= maze(cr + 1,cc,er,ec ) ;

    }

    return rightside + dowenside;

    


}

int main()
{
    int n,m,ma;
    printf("enter the rows: ");
    scanf("%d",&n);
    printf("enter the coluns: ");
    scanf("%d", &m );

    ma = maze(1,1,n,m);
    printf("\nThe value is %d ",ma);
}