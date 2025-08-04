// WAP using recusrion the no. of total ways to climb a n no. of stairs if one could clib 1 or 2 or 3 stairs at a time.
#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 5;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    printf("Enter the number of stairs : ");
    scanf("%d",&n);
    printf("The number of totalways to climb %d number of stairs is : %d",n,stair(n));
    return 0;
} 