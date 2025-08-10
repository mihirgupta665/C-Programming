// WAP to print and store a matrix after converting into wave form in which rows remains same.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter a number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0,k=r-1;j<k;j++,k--){
                int temp= arr[j][i];
                arr[j][i]= arr[k][i];
                arr[k][i]= temp;
            }
        }
    }
    printf("Matrix in wave form : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}