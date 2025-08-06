// WAP using recursion to find out total no. of ways to reach the end point of maze of n rows and m columns by moving only downward and rightwards. 
#include<stdio.h>
int maze(int cr,int cc, int er, int ec){
    int rightward=0;
    int downward=0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){
        rightward+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downward+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightward+=maze(cr,cc+1,er,ec);
        downward+=maze(cr+1,cc,er,ec);
    }
    int totalways = rightward + downward;
    return totalways;
}
int main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    int no_of_ways=maze(1,1,n,m);
    printf("The total number of ways for %d rows and %d column is : %d",n,m,no_of_ways);
    return 0;
}