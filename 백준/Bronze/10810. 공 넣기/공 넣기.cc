#include <stdio.h>

int main()
{
    int N,M,i,j,k;

    int basket[100] = { 0, }; // 1

    scanf("%d %d",&N,&M);


    for(int a = 0; a < M; a++)
    {
        scanf("%d %d %d",&i,&j,&k);
        
        for(int b = i; b <= j; b++)
        {
            basket[b] = k;
        }
    }

    for(int c = 1; c <= N; c++) // 2
    {
        printf("%d ",basket[c]);
    }

    return 0;
}