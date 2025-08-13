#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d- element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int k=-1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                k=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
    printf("Array after sorting : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}