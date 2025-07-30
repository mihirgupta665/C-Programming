// WAP to print ascii with the coresponding G
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the staring and ending ascii values: ");
    scanf("%d %d",&a,&b);
    for (int i =a;i<=b;i++){
        char ch= (char)i;
        printf("%d -:-> %c \n",i,ch);
    }
    return 0;
}