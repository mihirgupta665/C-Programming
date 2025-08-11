#include<stdio.h>
#include<string.h>
int main(){
    char str1[40];
    scanf("%s",str1);  // take input only the first word
    printf("your input was %s",str1);
    char str2[40];
    gets(str2);   // entire str gets input.
    puts(str2);
    char str3[40];
    scanf("%[^\n]s",str3);
    printf("%s",str3);
    return 0;
}