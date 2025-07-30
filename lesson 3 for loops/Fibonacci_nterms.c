// 1 1 2 3 5 8 13 21 ..... upto n terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms of Fibonacci series: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int c=0;
    int sum=2;
    printf("The 1st fibonacci term is: %d \n",a);
    printf("The 2nd fibonacci term is: %d \n",b);
    for (int i =3;i<=n;i++){
        c=a+b;
        printf("The %dth term of fibonacci is: %d \n",i,c);
        sum=sum+c;
        a=b;
        b=c;
    }
    printf("The sum till %dth term of fibonacci series is: %d",n,sum);
    return 0;
}