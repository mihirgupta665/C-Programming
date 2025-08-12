#include<stdio.h>
#include<string.h>
int main(){
    typedef float decimal;
    typedef struct book{
        char name[50];
        int page;
        decimal price;
    }Book;                    //book nahi hai Book hai
    Book doremon;
    strcpy(doremon.name,"The magical gadgets");
    doremon.page=1024;
    doremon.price=3538.37;
    printf("For doremon book \nName is : %s \nIts Total Pages are %d \nIts Price = %f",doremon.name,doremon.page,doremon.price);
    return 0; 
}