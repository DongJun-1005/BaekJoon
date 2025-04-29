#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,t;
    char quiz[80] = " ";
    //int num[80] = {0};
    int cnt = 0;
    int sum_cnt = 0;

    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        scanf("%s",quiz);
        //printf("%s\n",quiz);

        int s = strlen(quiz);
        for(j = 0; j < s; j++)
        {   
            if(quiz[j] == 'O')
            {
                cnt++;
                sum_cnt += cnt;
                // printf("cnt 증가 검사 : %d\n",cnt);
            }
            else if(quiz[j] == 'X')
            {
                cnt = 0;
            }
        }
        printf("%d\n",sum_cnt);
        cnt = 0;
        sum_cnt = 0;
    }
}