#include<stdio.h>
#include<string.h>
int main(){
    char s1[40]="Mihir Gupta";
    char s2[20];
    int l=strlen(s1);
    printf("%d\n",l);   // len of the strings (intger)
    strcpy(s2,s1);      // generates a deep copy of s1 in new variable s2
    printf("%s\n",s2);
    strcat(s1,s2);   // concatanates s1 and s2 but s1 size must be enought to contain both remember space is not given.
    printf("%s\n",s1);
    s1[40]="Harry_safas_potter";
    int compare = strcmp(s1,s2);  // compare the two strings
    printf("%d\n",compare);
    strncpy(s1,s2,4); // copy substring of size len starting from s1 character pointer to s2.
    printf("%s",s1);         
    }