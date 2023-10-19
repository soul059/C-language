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


    pokemon a,b,c;
    struct pokemon pikachu;
    //from user
    printf("Enter Pikachus HP: ");
    scanf("%d", &pikachu.hp);
    pikachu.attack = 60;// . operator
    //pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';


    /*
        how to get string

        strcpy(a.name,"pikachu");

        
    */


    a = pikachu;
    b = a;        // this is the fature of strings

    printf("%d",pikachu.hp);


    return 0;


    

}