#include <stdio.h>
#include <string.h>

int main()
{
    char S[52];
    int i,N;

    scanf("%d",&N);
    getchar();
    
    for(i = 0; i < N; i++)
    {
        fgets(S, sizeof(S), stdin);
        printf("%d. ",i+1);
        printf("%s",S);
    }
}