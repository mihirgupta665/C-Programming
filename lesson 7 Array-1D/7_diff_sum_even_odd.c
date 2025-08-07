//WAP to find the differnce between the sum of integer at even idicies to the sum of indices of odd indices.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int se=0, so=0;
    for(int i=0;i<n;i++){
        if(i%2==0) se+=arr[i];
        else so+=arr[i];
    }
    printf("The diffence of sum of integers at even and odd idicies is : %d",se-so);
    return 0;
}