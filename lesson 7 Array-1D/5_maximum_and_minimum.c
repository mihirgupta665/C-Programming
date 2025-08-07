//WAP to search for the minimun and maximun  value in the array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    printf("The minimum and maximum value in the array is %d and %d respectively.",min,max);
    return 0;
}