#include <stdio.h>

int main()
{
    int A,B,C,T;
    scanf("%d %d %d",&A,&B,&C);
    
    if(A>B)
    {
        T = A; A = B; B = T;
    }
    if(B>C)
    {
        T = B; B = C; C = T;
    }
    if(A>B)
    {
        T = A; A = B; B = T;
    }
    printf("%d %d %d",A,B,C);
}