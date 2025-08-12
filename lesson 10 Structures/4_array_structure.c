#include<stdio.h>
#include<string.h>

int main(){
    typedef struct cricketer{
        char name[40];
        int age;
        int nom;
        float avg;
    }cricketer;
    int n;
    printf("Enter the number of cricketer: ");
    scanf("%d", &n);
    // Consume the newline character left in the input buffer
    getchar();
    cricketer arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter the name of %d criketer: ", i + 1);
        scanf("%[^\n]s",&arr[i].name);
        printf("Enter the age of %d criketer: ", i + 1);
        scanf("%d", &arr[i].age);
        printf("Enter the number of matches of %d criketer: ", i + 1);
        scanf("%d", &arr[i].nom);
        printf("Enter the avg of %d criketer: ", i + 1);
        scanf("%f", &arr[i].avg);   
    }
    for(int i = 0; i < n; i++){
        printf("The name of %d- cricketer is: %s\n", i + 1, arr[i].name);
        printf("The age of %d- cricketer is: %d\n", i + 1, arr[i].age);
        printf("The number of matches played by %d- cricketer is: %d\n", i + 1, arr[i].nom);
        printf("The average score of %d- cricketer is: %.2f\n", i + 1, arr[i].avg);
    }
    return 0;
}
