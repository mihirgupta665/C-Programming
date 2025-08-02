/*
        A
      B C D
    E F G H I
  J K L M N O P
Q R S T U V W X Y 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int a=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i*2-1;k++){
            printf("%c ",(char)a);
            a++;
        }
        printf("\n");
    }
    return 0;
}