// Understanding math library and use of sqrt and pow functions.
#include<stdio.h>
#include<math.h> // already consists of many functions.
int main(){
    int a,b;
    printf("Enter two number A and B:\n");
    scanf("%d %d",&a,&b);
    int s1= sqrt(a);
    int s2= sqrt(b);
    int p= pow(a,b);
    printf("The squareroot of %d and %d are %d and %d respectvely.\n",a,b,s1,s2);
    printf("The answer for %d raise to power %d is %d.",a,b,p);
    return 0;
}