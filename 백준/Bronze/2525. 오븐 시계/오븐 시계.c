#include <stdio.h>

int main()
{
    int A,B,C;

    scanf("%d %d\n", &A,&B);
    scanf("%d",&C);
    
    if(B+C <= 59){
        printf("%d %d",A,B+C);
    }
    else{
        int hour;
        int min;
        hour = (B+C)/60;
        min = (B+C)%60;
        if(A+hour >=24){
            printf("%d %d",A+hour-24,min);
        }
        else{
            printf("%d %d",A+hour,min);
        }
        
    }
    return 0;
}