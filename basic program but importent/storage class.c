#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

int g; // Globle varible
// scop          : Global to the program they are defind in
// default value : 0
// lifetime      : these varibles are declared outside any function.they are availeble throughout the lifetime of the program

extern int ex; // external varibale, if not declared then link error will occur
    // but if we declare and initialize then no problem
    //extern int ex =15;

// exterb keyword is use to inform our C compiler that a given variable is declared somewhere
// Using extern will not allocate space for the variable

int main()
{
    // Declaration - telling compiler about the variable (NO SPACE RESERVED)

    // Definition - Declaration + space reservation

    int s; // by default it is consider as auto varible

    // scop          : local to function body they are defined in
    // default value : Garbage value
    // lifetime      : till the end of the function block they are defind in
    //OR auto int s;


    static int st; // it can run only one time

    // scop          : local to the they are defined in
    // default value : 0
    // lifetime      : they are alailable throughout the lifetime of the programe
    // a stiatic varible remains under existence for use withen the function for entire program run.
    // static int harry written inside any function will tell cimpiler that harry is static variable
    // it is recommend to minimize use of unnecessary static varible in program.
    
    const int cnst=23; // constant integer
    
    // scop          : local to the they are defined in
    // default value : 0
    // read-only     : once initialized cannot be changed
    // lifetime      : till the end of the function block they are defind in



    register int r; // it runs fast then normel varible
    
    // scop          : local to the function they are declared in
    // default value : Garbage value
    // lifetime      : they are available till the end or the function block, in ehich the varible is defined
    // register variable requests the compiler to store the vatiable in the CPU register instead of storing in memory to have faster access
    // generally this is donr for the variables which are bing used frequently
    
    return 0;
}