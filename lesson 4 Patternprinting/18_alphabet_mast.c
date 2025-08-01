/*
        E
      E F
    E F G
  E F G H
E F G H I
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int a=69;
        for(int k=1;k<=i;k++){                                         //  for(int k=65;k<=i+64;k++){
        printf("%c ",(char)a);                                          //  printf("%c ",(char)k);
        a++;                                                              
        }
        printf("\n");
    }
    return 0;
}