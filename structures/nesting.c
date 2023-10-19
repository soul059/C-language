#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    typedef struct pokemon{
        char name[50];
        int hp;
        int attack;
        int defense;
    } pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        int spicalAttack;
    } legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon l;
        char spical[50];
    } godpokemon;
    
    godpokemon arcus;
    strcpy(arcus.l.normal.name, "Arcus");
    arcus.l.normal.hp = 1234;
    arcus.l.normal.attack = 9876;
    arcus.l.normal.defense = 5432;
    arcus.l.spicalAttack = 99999;
    strcpy(arcus.spical,"cunvert any thing to rock");

    return 0;
}