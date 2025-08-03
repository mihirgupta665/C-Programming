//WAP to take input two integer and print the hcf or gcd of both th numbers.
#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int hcf(int a ,int b){
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int gcd = hcf(a,b);
    printf("The Greatest/Highest Common Factor of %d and %d is : %d",a,b,gcd);
}