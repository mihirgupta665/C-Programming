/*
    1                     0c0  
   1 1                  1c0  1c1  
  1 2 1              2c0  2c1   2c2             2c1= 2!/(1!*1!)    ncr=n!/(r! * (n-r)!)
 1 3 3 1          3c0   3c1  3c2   3c3
1 4 6 4 1      4c0   4c1   4c2  4c3   4c4


        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1 
   1 5 10 10 5 1
  1 6 15 20 15 6 1
 1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1


*/
#include<stdio.h>
int factorial(int a){
    int p=1;
    for(int i =1;i<=a;i++){
        p*=i;
    }
    return p;
}
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        for(int k=1;k<n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int ncr = factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}