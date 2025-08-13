#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        printf("Enter the %d- element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag = false;
            }
        }
        if(flag==false) 
        break;
    }
    printf("Array after sorting  : ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}