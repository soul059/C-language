#include<stdio.h>
// for using gats and puts we need to use this is mandatrory
#include<string.h>

int main()
{
    char str[100];

    //scanf("%s",str); 
    // this will not take space 


    scanf("%[^\n]",str); // this will take all char
    // we can also change \n to any char

    // also another way to get string
    // gats(str);

    printf("%s",str);
    // we can also use puts(str); for printong
    
    return 0;
}