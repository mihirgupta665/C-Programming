#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter the age of Ram , Shyam and Ajay: \n");
    scanf("%d %d %d",&r,&s,&a);
    if (r<s){
        if(r<a)
        printf("Ram of age %d is the Youngest",r);
        else
        printf("Ajay of age %d is the Youngest",a);
    }
    else{                    // r to youngest nahi hai pakka
        if(s<a)
        printf("Shyam of age %d is the Youngest",s);
        else
        printf("Ajay of age %d is the Youngest",a);
    }
    return 0;
}