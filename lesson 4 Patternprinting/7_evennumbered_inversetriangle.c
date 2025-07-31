/*
13579
1357
135
13
1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int a=2;
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}