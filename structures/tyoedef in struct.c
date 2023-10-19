#include<stdio.h>
#include<string.h>
int main()
{

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon ;//this line is importent if we are using typedef


    struct pokemon pikachu;
    
    // OR

    pokemon charizard; // how to use typedef
    
    

    return 0;
}