#include <stdio.h>

int A,B,T;

int main()
{
    scanf("%d",&T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);

    }

}