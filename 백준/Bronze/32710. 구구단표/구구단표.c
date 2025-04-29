#include <stdio.h>

int main()
{
    int A,B,C;
    int N;

    scanf("%d",&N);

    for(A = 2; A < 10; A++)
    {
        if(N == A)
        {
            printf("1");
            return 0;
        }
        for(B = 1; B < 10; B++)
        {
            if(N == B)
            {
                printf("1");
                return 0;
            }

            C = A * B;

            if(N == C)
            {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
    return 0;
}