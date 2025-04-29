#include <stdio.h>
#include <string.h>

int main()
{
    char N[100000];
    int i,j,res;

    while(scanf("%s",N) && N[0] != '0')
    {
        j = strlen(N);
        res = 1;

        for(i = 0; i < j/2; i++)
        {
            if(N[i] != N[j-(i+1)])
            {
                res = 0;
            }
        }
        if(res == 1)
        {
            printf("yes\n");
        }
        else if(res == 0)
        {
            printf("no\n");
        }
    }
}