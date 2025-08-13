#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d- element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>=1){
            int temp= arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}