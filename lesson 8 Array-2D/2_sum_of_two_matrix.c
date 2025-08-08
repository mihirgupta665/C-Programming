// WAP to add and multiply two matrix and print the sum and product matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    printf("First matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[r][c];
    printf("Second matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    int sum[r][c];
    int product[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
            product[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    printf("Sum array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("Product array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}