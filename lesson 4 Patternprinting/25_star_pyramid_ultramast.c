/*
* * * * * * * * * * * * *
* * * * * *   * * * * * *
* * * * *       * * * * * 
* * * *           * * * *
* * *               * * *
* *                   * * 
*                       *
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i++){
        printf("* ");
    }
    printf("\n");
    int nsp=1,nst=n-1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int m=1;m<=nst;m++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}