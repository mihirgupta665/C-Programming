#include<stdio.h>
int main(){
    char str[]="College is mine";
    char* ptr=str;
    printf("%s\n",ptr);
    while(*ptr!='\0'){
        printf("%c ",*ptr);
        ptr++;
    }
    char* p=str;
    *p='D';
    printf("\n%s",str);
}