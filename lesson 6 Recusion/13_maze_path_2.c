// WAP using recursion to find out total no. of ways to reach the end point of maze of n rows and m columns by moving only downward and rightwards. 
#include<stdio.h>
int maze(int n,int m){
    int rightward=0;
    int downward=0;
    if(n==1 && m==1) return 1;
    if(n==1) {
        rightward+= maze(n,m-1);
    }
    if(m==1) {
        downward+= maze(n-1,m);
    }
    if(n>1 && m>1){
        rightward+= maze(n,m-1);
        downward+= maze(n-1,m);
    }
    int totalways = rightward + downward;
}
int main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    int total_no_ways=maze(n,m);
    printf("The total number of ways for %d rows and %d colmuns is : %d",n,m,total_no_ways);
}
