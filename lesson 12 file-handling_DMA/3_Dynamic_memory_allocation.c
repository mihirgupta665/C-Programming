#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr1 = (int*) malloc(10*sizeof(int));
    printf("%d\n",*ptr1);
    int* ptr2 = (int*) calloc(10,sizeof(int));
    printf("%d\n",*ptr2);

    // array of n inputs 
    int n;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
    int *p1=ptr;
    for(int i=0;i<n;i++){
        printf("Enter the %d. integer : ",i+1);
        scanf("%d",&(*p1));
        p1++;
    }
    int *p2=ptr;
    for(int i=0;i<n;i++){
        printf("%d ",*p2);
        p2++;
    }
    ptr = realloc(ptr,n*10*sizeof(int));        //realloc(ptr,size)
    free(ptr);                                  // free(ptr)
    return 0;
}