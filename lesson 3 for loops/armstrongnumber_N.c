//WAP to print n armstrong numbers . An Armstrong number is a number in which the sum of cube of all the digits of the numbers is equal to the numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number upto which armstrong inspection is required: ");
    scanf("%d",&n);
    for (int i =1; i<=n;i++){
        int j=i,sum=0;
        while(j!=0){
            int k=j%10;
            sum+=k*k*k;
            j/=10;
        }
        if (sum==i) printf("%d is an armstrong number. \n",i);
    }
    return 0;
}