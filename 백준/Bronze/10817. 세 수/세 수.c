#include <stdio.h>

int main()
{
    int A,B,C;
    int temp;

    scanf("%d %d %d",&A,&B,&C);

    if(A < B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    if(B < C)
    {
        temp = B;
        B = C;
        C = temp;
    }

    if(A < B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    printf("%d",B);
}