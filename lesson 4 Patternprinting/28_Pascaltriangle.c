/*    
     1
    1 1
   1 2 1                                              nC(r+1) = nCr * (n-r)/(r+1)
  1 3 3 1
 1 4 6 4 1 
1 5 10 10 5 1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of rows: ");
    scanf("%d",&n);
    for(int i =0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        printf(" ");
        }
        int first = 1;
        for(int k = 0;k<=i;k++){
            printf("%d ",first);
            first = first * (i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}