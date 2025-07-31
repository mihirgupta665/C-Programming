/*
1
AB
123
ABCD
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            (i%2==0)?printf("%c",(char)(j+64)):printf("%d",j);
            }
        printf("\n");
        }
    return 0;
    }