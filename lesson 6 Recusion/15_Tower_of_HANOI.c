// WAP to solve tower of hanoi using recursion
#include<stdio.h>
void tower(int n, int s, int h, int d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c --> %c \n",s,d);
    tower(n-1,h,s,d);
}
int main(){
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}