/*
A B C D E F G H I J K L M
A B C D E F   H I J K L M
A B C D E       I J K L M
A B C D           J K L M 
A B C               K L M
A B                   L M
A                       M
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbr of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i++){
        printf("%c ",(char)64+i);
    }
    printf("\n");
    int nst=n-1,nsp=1;
    for(int i =1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%c ",(char)64+a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            a++;
        }
        for(int m=1;m<=nst;m++){
            printf("%c ",(char)64+a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}