#include<stdio.h>
#define Pi 3.14159265359        //  No need to give the datatypes.
#define Area(r) (Pi*r*r)        //  No need to give the datatypes.
int main(){
    printf("The value of PI is : ");
    printf("%.11f\n",Pi);
    printf("%.11f",Area(10));
}