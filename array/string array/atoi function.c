#include<stdio.h>
#include<string.h>
// if we wnat to use atoi we required
#include<stdlib.h>
// this is also use for exit()


int main()
{
    char str[100];
    gets(str);

    printf("%d",atoi(str)); // curnvert string to int

    // str = 1234abd564jdkf
    // output will be 1234

    // only take first int

    return 0;

}
 