//WAP to print the sum of the two smallest number possible from digits of the array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d- element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int flag=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
        break;
    }
    int sum1=0;
    printf("Minimum number possible : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        sum1=sum1*10+arr[i];
    }
    int sum2=0;
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            break;
        }
    }
    printf("\nSecond minimum number possible : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        sum2=sum2*10+arr[i];
    }
    printf("\nThe sum of two smallest number possible is : %d ",sum1+sum2);
    return 0;
}