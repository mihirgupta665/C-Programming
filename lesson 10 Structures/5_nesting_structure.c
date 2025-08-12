#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[40];
        int attack;
        float speed;
        int health;
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[40];
    }legendarypokemon;
    typedef struct godpokemon{
    legendarypokemon legend;
    char uniteattack[40];   
    }godpokemon;
    godpokemon zacian;
    strcpy(zacian.uniteattack,"Slay the pokemon by sword");
    strcpy(zacian.legend.ability,"Charge unite balls");
    zacian.legend.normal.attack=360;
    zacian.legend.normal.health=1000;
    zacian.legend.normal.speed=200;
    printf("Zacian's god attack is : %s",zacian.uniteattack);
    printf("\nZacian's legendary ability is : %s",zacian.legend.ability);
    printf("\nZacian's attack is : %d",zacian.legend.normal.attack);
    printf("\nZacian's health is : %d",zacian.legend.normal.health);
    printf("\nZacian's speed is : %.2f",zacian.legend.normal.speed);
    return 0;
}