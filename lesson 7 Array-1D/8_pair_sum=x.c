//WAP to count the number of pair in the array whose sum is equal to a value x.
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
    int x;
    printf("Enter a value to find : ");
    scanf("%d",&x);
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                c++;
            printf("\n%d , %d has its sum equal to %d",arr[i],arr[j],x);
            }
        }
    }
    printf("\nThe count of pair whose value is equal to %d is : %d",x,c);
    return 0;
}