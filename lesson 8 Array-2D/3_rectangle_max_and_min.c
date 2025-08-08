//WAP a matrix of m*n and coordinates (r1,c1) and (r2,c2) find the maximum and minimum value from of the given rectangle.
#include<stdio.h>
#include<limits.h>
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
    int r1,c1,r2,c2;
    printf("Enter the coordinates of staring and ending rectangle : ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int max=INT_MIN;
    int max1=0,max2=0;
    int min=INT_MAX;
    int min1=0,min2=0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            if(arr[i][j] < min){
                min=arr[i][j];
                min1=i;
                min2=j;
            }
            if(arr[i][j]>max){
                max=arr[i][j];
                max1=i;
                max2=j;
            }
        }
    }
    printf("The maximum value is %d at index [%d,%d]\n",max,max1,max2);
    printf("The minimum value is %d at index [%d,%d]",min,min1,min2);
    return 0;

}