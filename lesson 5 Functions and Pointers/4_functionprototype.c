// Understanding to create a function prototype and its benefits to crete an function anywhere at anytime.
#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf("You are in India.\n");
    void australia();
    australia();
}
void australia(){
    printf("You are in Australia.\n");
    void england();
    england();
}
void england(){
    printf("You are in England.\n");
}