/*
ABCDE
ABCD
ABC
AB
A
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%c",(char)j+64);
        }
        printf("\n");
    }
    return 0;
}