// intro to pointers understanding n &n x &x *s with %p addressing plus double pointer.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a numbers: ");
    scanf("%d",&n);
    int* x= &n;
    int** y= &x;
    int*** z= &y;
    printf("Value of n is : %d \n",n);
    printf("The value of &n is :%p \n",&n);
    printf("Value of x is: %p \n",x);
    printf("The value of &x is : %p \n",&x);
    printf("The value of *x is : %d \n",*x);
    printf("The value of y is : %p \n",y);
    printf("The value of &y is : %p \n",&y);
    printf("The value of *y is : %p \n",*y);
    printf("The value of **y is : %d \n",**y);
    printf("The value of ***Z is : %d \n",***z);
}