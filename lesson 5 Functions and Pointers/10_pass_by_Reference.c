// WAP to swap two number using there address by passking by references.
#include<stdio.h>
void swap(int* x,int* y){
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
int main(){
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The value of a is %d and that of b is %d",a,b);
}