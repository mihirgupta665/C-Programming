//WAP to print the array in spiral form.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the number for row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int store[r*c];
    int a=0;
    int minr=0,maxr=r-1,minc=0,maxc=c-1;
    int tcount=r*c,count=0;
    while(count<tcount){
        for(int j=minr;j<=maxc && count<=tcount;j++){
            store[a]=arr[minr][j];
            a++;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<=tcount;i++){
            store[a]=arr[i][maxc];
            a++;
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<=tcount;j--){
            store[a]=arr[maxr][j];
            a++;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<=tcount;i--){
            store[a]=arr[i][minc];
            a++;
            count++;
        }
        minc++;
    }
    printf("The element of the array in spiral form : ");
    a=0;
    int spiral[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",store[a]);
            spiral[i][j]=store[a];
            a++;
        }
    }
    printf("\nThe spiral matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",spiral[i][j]);
        }
        printf("\n");
    }
    return 0;
}