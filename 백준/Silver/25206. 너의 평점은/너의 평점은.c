#include <stdio.h>

int main()
{
    int i;
    char ob[51]; // 과목이름
    char grade[3]; // 등급
    float credit; // 학점
    float sum_credit = 0; //학점의 총합
    float temp = 0; // 등급을 과목 평점으로 변환한 값
    float multiple = 0; // 학점 x 과목평점 값
    float res = 0;
    
    for(i = 0; i < 20; i++)
    {
        scanf("%s %f %s",ob,&credit,grade);
        
        if(grade[0] == 'P') continue;

        if(grade[0] == 'A'){
            if(grade[1] == '+') temp = 4.5;
            else temp = 4.0;
        }
        if(grade[0] == 'B'){
            if(grade[1] == '+') temp = 3.5;
            else temp = 3.0;
        }
        if(grade[0] == 'C'){
            if(grade[1] == '+') temp = 2.5;
            else temp = 2.0;
        }
        if(grade[0] == 'D'){
            if(grade[1] == '+') temp = 1.5;
            else temp = 1.0;
        }
        if(grade[0] == 'F')
        {
            temp = 0.0;
        }
        sum_credit += credit; // 총 학점 구하기
        multiple += temp * credit; // 학점 * 과목평점 구하기
        
    }
    
    // 학점이 0인경우를 위해
    if(sum_credit == 0){
        printf("0.0000\n");
    }
    else{
        res = multiple / sum_credit;
        printf("%.4f\n",res);
    }

    return 0;
}