//WAP to write the marks of students and print the student's roll no whose marks are less than 30.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\n Enter roll no:- %d marks : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n ROLL NO. of students who scored less than 30 are : ");
    for(int i=0;i<=n;i++){
        if(arr[i]<30) printf("\n ROLL no. --> %d has obtained marks : %d",i+1,arr[i]);
    }
} 