// ternary operator for checking three digit number
#include<stdio.h>
int main(){
    int x;
    printf("Enter a 3 digit number: \n");
    scanf("%d",&x);
    x>99 && x<1000 ? printf("%d is a three digit number",x) : printf("%d is not a three digit number",x);
    return 0;
}