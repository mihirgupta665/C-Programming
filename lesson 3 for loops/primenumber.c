// WAP to check whether the given number is prime or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number for prime inpection: ",n);
    scanf("%d",&n);
    int c=0;
    for(int i =1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(n==1 || n==0) printf("The number 1 is niether prime nor composite.");
    else if(c==2) printf("The number %d is prime.",n);
    else printf("The number %d is a composite number.",n);
    return 0;
}
