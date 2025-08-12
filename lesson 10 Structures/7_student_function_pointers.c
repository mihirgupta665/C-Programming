/*
WAP to create a data structure for student information. 
It specifies that the structure should include the following attributes:
Roll number, Name, Department, Course, and Year of joining. 
The task involves creating two variables of this structure type
and then writing a function that checks if two students belong
to the same department. This function should accept the two structure 
variables as its input parameters.
*/
#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[40];
    int rollnum;
    char department[40];
    char course[40];
    int year;
}student;
void input(student* x){              // pass by reference
    printf("Enter the name of the student : ");
    scanf("%s",&x->name);
    printf("Enter the rollnum of the student : ");
    scanf("%d",(*x).rollnum);
    printf("Enter the department of the student : ");
    scanf("%s",&x->department);
    printf("Enter the course of the student : ");
    scanf("%s",&x->course);
    printf("Enter the year of the student : ");
    scanf("%d",&x->year);
}
int main(){
    student a,b;
    input(&a);                      // address so pass by reference
    input(&b);
    if(strcmp(a.department,b.department)==0) printf("Students belong to same department.");
    else printf("Students do not belong to same department");
}

   