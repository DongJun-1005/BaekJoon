#include <stdio.h>

int main()
{
    int N,K,i;
    int cnt = 0;

    scanf("%d %d",&N,&K);

    for(i = 0; i <= N; i++)
    {
        if( i == 0) continue;

        if(N % i == 0)
        {
            cnt++;
            if(cnt == K)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    
    printf("0");
    return 0;
}
