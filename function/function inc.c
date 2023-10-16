/*
--> function are used to divide a large c program into smaller pieces
--> A function can be called multiple times to provide reusability and modularity tolthe C prigram
--> Functions help in breaking down the code, making it more readable.
--> also called produre or subroutine
*/

#include <stdio.h>// library function
/*
    basic sintax of a C funcations is written as follows:
    return_type name(data_type parameter 1 ,data_type parameter 2,..) {
        code......
    }

*/


/*
--> we can avoid rewriting same logic throigh function
--> we can divide work among programmers using functions
--> we can easily debug a program using finctions
*/

// for calling function name_of_function;

// user diffind function

void op();// without arguments and wirhout return value

int sum(int a,int b);// with argiments and with return value

void star(int n);// with arguments and wirhout return value


int hi();// without arguments and with return value

int main()
{
    int a=4,b=5,c;
    c = sum(a,b);
    printf("%d\n",c);
    star(5);
    hi();
    printf("%d\n",hi());
    op();
    return 0;
}

void op()
{
    printf("hello world"); // this will print hello world on screen
}

int sum(int a,int b)
{
    return a+b;
}

void star(int n)
{
    for(int i=1;i<=n;i++)
        printf("* ");
}

int hi()
{
    int d=5,g=6,f;
    f=d+g;
    return f;
}