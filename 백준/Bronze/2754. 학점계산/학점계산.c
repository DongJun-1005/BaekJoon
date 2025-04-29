#include <stdio.h>
#include <string.h>

int main()
{
    char score[2];
    int i;

    scanf("%s",score);

    if(score[0] == 'A') 
    {
        if(score[1] == '+')
        {
            printf("4.3");
        }
        if(score[1] == '0')
        {
            printf("4.0");
        }
        if(score[1] == '-')
        {
            printf("3.7");
        }
    }
    if(score[0] == 'B') 
    {
        if(score[1] == '+')
        {
            printf("3.3");
        }
        if(score[1] == '0')
        {
            printf("3.0");
        }
        if(score[1] == '-')
        {
            printf("2.7");
        }
    }
    if(score[0] == 'C') 
    {
        if(score[1] == '+')
        {
            printf("2.3");
        }
        if(score[1] == '0')
        {
            printf("2.0");
        }
        if(score[1] == '-')
        {
            printf("1.7");
        }
    }
    if(score[0] == 'D') 
    {
        if(score[1] == '+')
        {
            printf("1.3");
        }
        if(score[1] == '0')
        {
            printf("1.0");
        }
        if(score[1] == '-')
        {
            printf("0.7");
        }
    }
    if(score[0] == 'F')
    {
        printf("0.0");
    }
}