/*
// Arithmetic Progression till n numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbere of term required in arithmetic progression: ");
    scanf("%d",&n);
    for (int i =5,c=1;c<=n;c++,i+=7){
        printf("%d  ",i);
    }
    return 0;
}
*/
// print 100 97 94 .... till positive last integer.
#include<stdio.h>
int main(){
    int a=100;
    for(int i=1;a>=0;i++ ){
        printf("%d ",a);
        a-=3;
    }
    return 0;
}
