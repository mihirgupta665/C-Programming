#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int m=n,c=0;
    while(m!=0){
        c++;
        m=m/10;
    }
    int m1=n,r=0;
        while(m1!=0){
            int k=m1%10;
            r=r*10+k;
            m1=m1/10;
    }
    printf("The reverse of %d is %d",n,r);
    return 0;
}