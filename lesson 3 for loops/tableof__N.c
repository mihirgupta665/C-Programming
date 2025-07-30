// table of n
#include<stdio.h>
int main(){
    int n;
    printf("Enter thr number whose table is required: ");
    scanf("%d",&n);
    for (int i =1;i<=20;i++){
        printf(" %d * %d = %d \n",n,i,n*i);
    }
    return 0;
}