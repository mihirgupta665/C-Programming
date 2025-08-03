//WAP to write nCr combination of given two inputs. combination=  n!/(r!(n-r)!)
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i =1; i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter the values of n and r: \n");
    scanf("%d %d",&n,&r);
    int com= factorial(n)/(factorial(r)*factorial(n-r));
    printf("The nCr of n as %d and r as %d is %d",n,r,com);
    return 0;
}