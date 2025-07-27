// 3 points on one straight line or not
#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1 and y1 , x2 and y2 , x3 and y3: \n");
    scanf("%d %d %d %d %d %d %d ",&x1,&y1,&x2,&y2,&x3,&y3);
    float m1= (y2-y1)/(x2-x1);
    float m2= (y3-y2)/(x3-x2);
    if(m1==m2)
    printf("All points '%d %d', '%d %d' and '%d %d' lies on one straight line",x1,y1,x2,y2,x3,y3);
    else
    printf("Pointa '%d %d', '%d %d' and '%d %d' does not lies on one straight line",x1,y1,x2,y2,x3,y3);
    return 0;
}