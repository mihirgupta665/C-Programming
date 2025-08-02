/*
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");  
        }
        int a=65;
        for(int k=1;k<=i;k++){
            printf("%c ",(char)a);
            a++;
        }
        int b=i+65-2;
        for(int m=1;m<=i-1;m++){
            printf("%c ",(char)b);
            b--;
        }
        printf("\n");
    }
    return 0;
}