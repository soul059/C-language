#include<stdio.h>

int main()
{
    char str[]="hello";  // it will get \0 automatic 
    //OR
    // str[]={'h','e','l','l','o','\0'};

    // Null character (‘\0’) used to indicate the termination of a string that differs strings from normal character arrays.

    printf("%s",str);
    return 0;
}