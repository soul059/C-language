#include<stdio.h>
#include<string.h>

int student_marks(int n, int m[])//sum
{
    char c;
    scanf(" %c",&c);
    int sum=0,sum2=0;

    for(int i=0;i<n;i++ )
     {
         if(i%2==0)
         {
             sum+= m[i];
        }
        else
        {
            sum2+= m[i];
        }
    }

    if (c == 'b')
    {
        return sum;
    }
    else if(c=='g')
    {
        return sum2;
    }
    else return 0;
}
int main()
{
    int marks[1000];
    int student;
    

    scanf("%d",&student);
    
    for(int i=0;i<student;i++)
    {
        scanf("%d",&marks[i]);
    }

    
    int sum = student_marks(student,marks);

    printf("%d",sum);
    return 0;
}