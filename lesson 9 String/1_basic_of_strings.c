#include<stdio.h>
int main(){
    char str1[6] = {'H','E','L','L','O','\0'};
    for(int i=0;i<6;i++){
        printf("%c ",str1[i]);
    }
    printf("\n");
    char str2[] = "Hello my name is mihir";
    int i=0;
    while(str2[i]!='\0'){
        printf("%c ",str2[i]);
        i++;
    }
return 0;
}