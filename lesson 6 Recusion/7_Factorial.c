#include<stdio.h>
int factorial(int a){
    if (a==1 || a==0) return 1;       // Base Condition
    return a*factorial(a-1);          // recursion 
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact =factorial(n);
    printf("The Factorial of %d is %d",n,fact);
    return 0;
}