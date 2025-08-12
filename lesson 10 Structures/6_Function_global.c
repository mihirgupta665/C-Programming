#include<stdio.h>
 typedef struct pokemon{
      char name[40];
      int attack;
      float speed;
      int health;   
    }pokemon;
void change(pokemon p1){
    p1.attack=100;
    p1.health=80;
    p1.speed=80;
    printf("%d",p1.health);
}
int main(){
    pokemon pikachu;
    pikachu.attack=80;
    pikachu.speed=100;
    pikachu.health=120;
    change(pikachu);
}