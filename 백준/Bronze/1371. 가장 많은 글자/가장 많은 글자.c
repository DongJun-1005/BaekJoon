#include <stdio.h>

int main()
{
    char N[52];
    int alpha[26] ={0};
    int i,count = 0;

    while(fgets(N, sizeof(N), stdin))
    {
        for(i = 0; N[i]; i++)
        {
            if('a' <= N[i] && N[i] <= 'z')
            {
                alpha[N[i] - 'a']++;
            }
        }
        
    }

    int max = 0;
    for(i = 0; i < 26; i++)
    {
        if(alpha[i] > max)
        {
            max = alpha[i];
        }
    }

    for(i = 0; i < 26; i++)
    {
        if(alpha[i] == max)
        {
            printf("%c",'a' + i);
        }
    }
    
    printf("\n");

    return 0;
    
}