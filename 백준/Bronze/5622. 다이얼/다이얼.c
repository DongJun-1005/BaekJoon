#include <stdio.h>
#include <string.h>

int main()
{
    char S[16];
    int sec = 0;
    int i;

    scanf("%s",S);
    int len = strlen(S);

    for(i = 0; i < len; i++)
    {
        if(S[i] >= 65 && S[i] <= 67) //ABC
        {
            sec += 3;
        }
        else if(S[i] >= 68 && S[i] <= 70) //DEF
        {
            sec += 4;
        }
        else if(S[i] >= 71 && S[i] <= 73) //GHI
        {
            sec += 5;
        }
        else if(S[i] >= 74 && S[i] <= 76) //JKL
        {
            sec += 6;
        }
        else if(S[i] >= 77 && S[i] <= 79) //MNO
        {
            sec += 7;
        }
        else if(S[i] >= 80 && S[i] <= 83) //PQRS
        {
            sec += 8;
        }
        else if(S[i] >= 84 && S[i] <= 86) //TUV
        {
            sec += 9;
        }
        else if(S[i] >= 87 && S[i] <= 90) //WXYZ
        {
            sec += 10;
        }
        
    }
    printf("%d",sec);
    return 0;
}
