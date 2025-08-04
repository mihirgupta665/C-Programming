//WAP using recursion calculate a raise to the power b.
#include<stdio.h>
int product(int a,int b){
    if(b==0) return 1;
    return a*product(a,b-1);
   /*
   int p=1;
   if(b==0) return p;
    p*=a;
    product(a,b-1,p);
   */
}
int main(){
    int a, b;
    printf("Enter the number and its raised power respectively : ");
    scanf("%d %d",&a,&b);
    int z = product(a,b);
    printf("The power of %d raised to the power %d is : %d",a,b,z);
    return 0;
}