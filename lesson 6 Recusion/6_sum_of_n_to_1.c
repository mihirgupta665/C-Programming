//WAP to print the sum of all positive interger till n numbers.
#include<stdio.h>
void sum(int n, int s){
    if(n==0){
        printf("The sum is : %d",s);
        return;
    }
    s+=n;
    sum(n-1,s);
    return;
}
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}