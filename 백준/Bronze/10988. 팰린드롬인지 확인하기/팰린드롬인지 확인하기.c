#include <stdio.h>
#include <string.h>

int main()
{
    char N[102];
    int i,k = 1;

    scanf("%s",N);
    int j = strlen(N);

    for(i = 0; i < j/2; i++)
    {
        if(N[i] != N[j-(i+1)])
        {
            k = 0;
            break;
        }
    }

    printf("%d",k);

    return 0;

}