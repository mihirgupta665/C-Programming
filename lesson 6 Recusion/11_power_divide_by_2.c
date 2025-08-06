// WAP to write a raised to the power b by dividng b by 2 every in the recursive calling.
#include<stdio.h>
int power(int a ,int b){
    if(b==0) return 1;
    int x = power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
    int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    printf("%d raise to the power %d is : %d",a,b,power(a,b));

}