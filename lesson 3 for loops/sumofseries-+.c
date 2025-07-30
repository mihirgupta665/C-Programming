// WAP to print the sum of series 1-2+3-4+5-6+7-8+9.....upto n terms.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms of the series: ");
    scanf("%d",&n);
    int c=1,sum=0;
    for (int i =1;i<=n;i++){
        sum=sum+i*c;
        c=c*-1;
    }
    printf("The sum of the given series of %d terms is: %d",n,sum);
} 