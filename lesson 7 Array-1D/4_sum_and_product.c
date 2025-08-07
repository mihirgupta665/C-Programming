// WAP to write down the sum and product of the array.
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
    int s=0,p=1;
    for(int i =0;i<n;i++){
        s+=arr[i];
        p*=arr[i];
    }
    printf("The sum of array is : %d",s);
    printf("\nThe pructuct of array is : %d",p);
    return 0;
}