#include<stdio.h>
int fibo(int n){
    if(n==2) return 1;
    if(n==1) return 0;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter the nth count for fibonaacci number : ");
    scanf("%d",&n);
    printf("The %d. term of fibonacci series is: %d",n,fibo(n));
    return 0;
}