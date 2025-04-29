#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000000];
    scanf("%[^\n]s",S);
    
    int i = strlen(S);
    int j;
    int cnt = 0;
    //int res = 0;
    
    if(i == 1)
    {
        if(S[0] == ' ')
        {
            printf("0\n");
            return 0;
        }
    }

    for(j = 1; j < i-1; j++)
    {
        if(S[j] == ' ')
        {
            cnt++;
            //res = cnt + 1;
        }
        
    }

    printf("%d",cnt+1);
    return 0;
}