// making a sum function of adding two numbers.
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a ,b;
    printf("Enter two numbers for addition: ");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;
}