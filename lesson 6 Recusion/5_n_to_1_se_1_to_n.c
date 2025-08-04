/* WAP to print 1
                2
                3
                4
                .
                . 
                n  term
                n  term
                .
                .
                4
                3
                2
                1
*/
#include<stdio.h>
void pattern(int n){
    if(n<0) return;
    printf("%d \n",n);
    pattern(n-1);
    printf("%d \n",n);
    return;
}
int main(){
    int n;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
