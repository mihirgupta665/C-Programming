/*
1 2 3 4 5 4 3 2 1
1 2 3 4   4 3 2 1
1 2 3       3 2 1
1 2           2 1
1               1
*/
#include<stdio.h>
int main(){
    int n;
    int s=1;
    printf("Enter the no. rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i++){
        printf("%d ",s);
        if(i<n) s++;
        else s--;
    }
    printf("\n");
    int nst=n-1,nsp=1;
    for(int i=1;i<=n-1;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int m=1;m<=nst;m++){
            a--;
            printf("%d ",a);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}