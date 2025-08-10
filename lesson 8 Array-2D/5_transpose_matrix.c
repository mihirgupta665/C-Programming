//WAP to transpose a matrix and print it after storing it in another array.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            arr2[i][j] = arr1[j][i];
        }
    }
    printf("Transposed matrix : \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}