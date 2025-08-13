#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d- element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}