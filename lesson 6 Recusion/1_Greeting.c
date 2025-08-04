// WAP using recursion print "good morning" n times.
#include<stdio.h>
void greeting(int n){
    if (n==0) return;
    printf("Good morning \n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter number of greetings : ");
    scanf("%d",&n);
    greeting(n);
}