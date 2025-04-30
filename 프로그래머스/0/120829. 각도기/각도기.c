#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
    if(angle<90){
        answer = 1;
        printf("%d",answer);
    }
    else if(angle==90){
        answer = 2;
        printf("%d",answer);
    }
    else if(angle<90){
        answer = 1;
        printf("%d",answer);
    }
    else if(angle<180){
        answer = 3;
        printf("%d",answer);
    }
    else if(angle==180){
        answer = 4;
        printf("%d",answer);
    }
    return answer;
}