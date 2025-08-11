#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter a string : ");
    gets(str);
    int c=0;
    while(str[c]!='\0'){
        c++;
    }
    printf("size of string is : %d \n",c);
    puts("String after reversing : ");
    for(int i=0,j=c-1;i<=j; i++,j--){
        char a= str[i];
        str[i]=str[j];
        str[j]=a;
    }
    puts(str);
    return 0;
}