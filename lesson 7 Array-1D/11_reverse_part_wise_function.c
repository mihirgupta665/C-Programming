//WAP to reverse a part of an array;
void reverse(int arr[],int si,int ei){
    for(int i=si, j=ei; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int si,ei;
    printf("Enter the staring and ending indices to be reversed : ");
    scanf("%d %d",&si,&ei);
    reverse(arr,si,ei);
    printf("The array after reversing all the indices from %d to %d is : ",si,ei);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}