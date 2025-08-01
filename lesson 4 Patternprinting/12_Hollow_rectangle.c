/*
* * * * * * *
*           *
*           *
* * * * * * *
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for (int i =1;i<=n/2 +1;i++){
        for (int j=1;j<=n;j++){
            if(i==1 || i ==n/2 +1 || j==1 || j==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}