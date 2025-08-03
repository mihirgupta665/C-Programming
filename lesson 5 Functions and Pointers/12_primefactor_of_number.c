// WAP to take a number and prints its prime factor only.
#include<stdio.h>
int countfactor(int a){
    int c=0;
    for(int i =1;i<=a;i++){
        if(a%i==0) c++;
    }
    return c;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int c=1;
    for(int i=2;i<=n;i++){
        if (n%i==0){
           int z = countfactor(i);
           if (z==2) {
           printf("The %d. prime factor of %d is : %d \n",c,n,i);
           c++;
           }
        }
    }
    return 0;
}