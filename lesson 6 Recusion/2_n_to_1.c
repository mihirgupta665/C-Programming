// WAP using recursion print n to 1 number.
#include<stdio.h>
void nto1(int n){
    if(n<0) return;
    printf("%d \n",n);
    nto1(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    nto1(n);
    return 0;
}