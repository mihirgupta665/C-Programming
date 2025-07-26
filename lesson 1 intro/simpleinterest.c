#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the Principal: ");
    scanf("%f",&p);
    printf("Enter the Rate: ");
    scanf("%f",&r);
    printf("Enter the Time period: ");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("Your Simple Interest is: %f",si);
    return 0;
}