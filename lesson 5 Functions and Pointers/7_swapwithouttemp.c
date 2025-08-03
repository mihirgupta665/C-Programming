// WAP to swap the values of two variable among themseleves.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number a and b respectively: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d and the value of b is %d.",a,b);
}