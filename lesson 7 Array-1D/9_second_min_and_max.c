//WAP to print second largest and second smallest number.
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    int min1=INT_MAX;
    int min2=INT_MAX;
    int a,b;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
            a=i;
        }
        else if(max2<arr[i] && max2!=max1){
            max2=arr[i];
            a=i;
        }
        if(min1>arr[i]){
            min2=min1;
            min1=arr[i];
            b=i;
        }
        else if(min2>arr[i] && min2!=min1){
            min2=arr[i];
            b=i;
        }
    }
    printf("The second largest value %d is at index %d and second smallest value %d is at index %d",max2,a,min2,b);
    return 0;
}