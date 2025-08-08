//WAP to find the duplicate element from the given array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }
    // int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The element %d at index %d has a duplicate value at index %d\n",arr[i],i,j);
            }
        }
    }
    return 0;
}