// percentage to grade converter
#include<stdio.h>
int main(){
    float m;
    printf("Enter your obtained percentage:\n");
    scanf("%f",&m);
    if(m>90)
        printf("Congratulation you obtained 'O' Grade");
    else{
        if(m>80)
            printf("Congratulation you have obtained 'A+' Grade");
        else{
            if(m>70)
                printf("Congratulations you have obtained 'A' Grade");
            else{
                if(m>60)
                    printf("Congratulations you have obtaoned 'B' Grade");
                else{
                    if(m>50)
                        printf("Congratulations you have obtained 'C' Grade");
                    else
                        printf("Better Luck next time you have been Fail, 'F' Grade");
                }
            }
                
        }
    }
    return 0;
}