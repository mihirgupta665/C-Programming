// WAP to write a program which prints all the odd integer values as a mulitple of it by 2 and prints the even integer after incrimenting by 2.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i=0;i<n;i++){
        printf("\nThe %d. number in array is : %d",i+1,arr[i]);
    }
    return 0;
} 