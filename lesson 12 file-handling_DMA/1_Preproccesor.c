#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(){
    float x= cbrt(8);
    printf("%f\n",x);
    int y = INT_MAX;     // using INT_MAX instead of __INT_MAX__
    printf("Highest INT value is : %d\n",y);
    long z = LONG_MAX;
    printf("Lowest LONG value is : %ld\n",z);
    return 0;
}
