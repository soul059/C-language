#include<stdio.h>
#include<string.h>

void print(int n,char c[][15])
{
    for ( int i = 0;i <n ; ++i)
    printf("%s\n",c[i]);
}
void scan(int n,char a[][15])
{
    int i;
    for (i=0 ; i<n ; ++i)
    {
        scanf("%s",a[i]);
    }
    return;
}

void sort(int n,char c[][15])
{
    char tamp[15];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(strcmp(c[i],c[j])>0)
            {
                strcpy(tamp,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],tamp);
            }
        }
    }
    return;
}
int main()
{
    char name[10][15];
    int n;
    printf("Enter the number of names:");
    scanf("%d",&n);
    scan(n,name);
    printf("\nBefore sorting:\n");
    print(n,name);

    sort(n,name);

    printf("\nAfter Sorting : \n");
    print(n,name);

    return 0;
}
