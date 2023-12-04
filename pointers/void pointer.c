#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int n=4;
    char ch='R';
    float x=3.14;
    void* ptr;

    /*
    
    --> A voidd pointer is a pointer that has no data type associated with it
    
    --> A void pointer can be easily typecasted to any pointer type
    
    --> In simple language it is a general purpose pointer variable
    
    --> A void pointer is a pointer that has no data type associated with it.
    
    --> It's like an empty container where we can store anything, but the value of
    this container will always be unknown until and unless you put something in it.
    
    --> A void pointer can be easily typecasted to any pointer

    --> It is not possible to dereference void pointers.

    --> pointer arithmetic is not allowed in C standards with voide pointers.
    
    --> hence it is not recommended to use pointer arithetic with void poinetrs.
    
    */
    ptr = &n;
    printf("Value of variable stored at address %u is: %d\n",(unsigned)ptr,*(int*)ptr);
    ptr = &ch;
    printf("Value of variable stored at address %u is: %c\n",(unsigned)ptr,*(char*)ptr);
    ptr = &x;
    printf("Value of variable stored at address %u is: %.2f\n",(unsigned)ptr,*(float*)ptr);
    return 0;
}