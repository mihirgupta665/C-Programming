// WAP to print a array in wave form.
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
        if(i%2!=0){
            for(int j=0,k=c-1;j<k;j++,k--){
                int temp = arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]= temp;
            }
        }
    }
    printf("The matrix in wave order : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

