//WAP to rotate an array by 90 degree by in place method i.e. not to use another matrix or array.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose first
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // now reverse the rows of transpose
    for(int i=0;i<r;i++){
        for(int j=0,k=c-1;j<k;j++,k--){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
