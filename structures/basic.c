#include<stdio.h>
#include<string.h>
int main()
{

    struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    };

    /*
        struct pokemon{
            int hp;
            int speed;
            int attack;
            char tier;
        } pikachu , charizard;
    */


    struct pokemon pikachu;
    //from user
    printf("Enter Pikachus HP: ");
    scanf("%d", &pikachu.hp);
    pikachu.attack = 60;// . operator
    //pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier = 'S';

    //how to print

    printf("%d",pikachu.hp);


    return 0;
}