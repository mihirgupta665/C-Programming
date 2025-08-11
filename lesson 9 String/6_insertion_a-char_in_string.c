#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter the string : ");
    scanf("%[^\n]s",&str);    // REXEXP see carefully
    int l = strlen(str);
    printf("The length of string is : %d\n",l);
    int pos;
    char ele;
    printf("Enter the element to be inserted : ");
    scanf("%s",&ele);
    printf("Enter the position : ");
    scanf("%d",&pos);
    l++;
    for(int i=l-1;i>=pos;i--){
        str[i+1]=str[i];
    }
    str[pos]=ele;
    printf("%s",str);
}