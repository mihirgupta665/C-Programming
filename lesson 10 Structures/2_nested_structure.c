#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        float speed;
        int attack;
        char type;
        char i_name[40];
    }pikachu;  //Declaration
    struct pokemon charizard,mewtwo;
    printf("Enter the health hp of pikachu : ");
    scanf("%d",&pikachu.hp);
    printf("Enter the speed of pikachu : ");
    scanf("%f",&pikachu.speed);
    printf("Enter the attack of pikachu : ");
    scanf("%d",&pikachu.attack);
    printf("Enter the type : ");
    scanf("%s",&pikachu.type);
    printf("Enter the initial version of pikachu : ");
    scanf("%s[^\n]",&pikachu.i_name);
    printf("For Pikachu hp = %d , speed = %.2f , attack = %d , type = %c , initial name = %s\n",pikachu.hp,pikachu.speed,pikachu.attack,pikachu.type,pikachu.i_name);
    charizard.hp=200;
    charizard.speed=125.6;
    charizard.attack=150;
    charizard.type='A';
    strcpy(charizard.i_name,"Charmendar or Charmeleon");
    printf("For Charizard \nHealth = %d \nspeed = %f \nattack = %d \ntype = %c \nPre-Evolutionary names are : %s",charizard.hp,charizard.speed,charizard.attack,charizard.type,charizard.i_name);
    
    struct legendary_pokemon{
        struct pokemon mewtwo;
        char ability[40];
    }Mewtwo;
    printf("\nEnter the ability of mewtwo : ");
    scanf("%s[^\n]",&Mewtwo.ability);
    printf("Ability of Mewtwo is %s",Mewtwo.ability);
    return 0;
}