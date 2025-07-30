// WAP to print the factorial of first n numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        printf("The Factorial of %d = %d \n",i,p);
    }
    return 0;
}