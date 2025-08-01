/*
         1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. rows: ");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=nsp;j++){
            printf("  ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("%d ",k);
        }
        nst+=2;
        printf("\n");
    }
    return 0;
}