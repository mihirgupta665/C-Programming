/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        for(int j=65;j<65+n;j++){
            printf("%c ",(char)j);
        }
        printf("\n");
    }
    return 0;
}