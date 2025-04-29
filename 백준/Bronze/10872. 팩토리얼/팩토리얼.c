#include <stdio.h>

int main()
{
    int N,i;
    int fac = 1;
    scanf("%d",&N);

    for(i = N; i > 0; i--)
    {
        fac *= i;
    }
    printf("%d",fac);


    return 0;
}