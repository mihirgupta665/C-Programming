//WAP to multiply two matrices and print the result;
#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Enter a number for row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    int r2,c2;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r2,&c2);
    int arr2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Enter a number for row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    if(c1==r2){
        int t=c1;
        int mul[r1][c2];
        for(int i =0;i<r1;i++){
            for(int j=0;j<c2;j++){
                 mul[i][j]=0;
                for(int k=0;k<t;k++){
                    // arr1[i] same * arr2[j] same
                    mul[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        printf("The matrix after multiplication of array is : \n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Column of first matrix is not equal to row of second matrix , therefore multiplication is not possible.");
    return 0;
}