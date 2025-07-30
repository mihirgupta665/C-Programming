// WAP to calculate the number , sum, product of the digits of the number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :  ");
    scanf("%d",&n);
    int m=n,c=0,s=0,p=1;
    while(n!=0){
        int k=n%10;
        s+=k;
        p*=k;
        c++;
        n/=10;
    }
    printf("For %d count, sum and product of the digits are: %d %d %d respectively.",m,c,s,p);
    return 0;
}