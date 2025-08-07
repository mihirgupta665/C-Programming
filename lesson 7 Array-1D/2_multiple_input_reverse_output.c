#include<stdio.h>
int main(){
    int arr[5];
    for(int i =0;i<5;i++){
        printf("\n Enter the %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Array is :");
    for(int i=0;i<5;i++){
        printf("\n %d",arr[i]);
    }
    printf("\n Array in reverse order is : ");
    for(int i=4;i>=0;i--){
        printf("\n %d",arr[i]);
    }
}