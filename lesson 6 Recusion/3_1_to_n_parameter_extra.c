// WAP using recursion print 1 to n number.
#include<stdio.h>
void nto1(int x, int n){
    if(x>n) return;
    printf("%d \n",x);
    nto1(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    nto1(0,n);
    return 0;
}