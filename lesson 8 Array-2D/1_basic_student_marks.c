//WAP to write a array with student name and marks.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row and column of the array : ");
    scanf("%d %d",&r,&c);
    int a1[2][3]={{1,2,3},{4,6,7}};         //inticializtion with first declaration
    int a2[2][3]={1,2,3,4,6,7};
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}