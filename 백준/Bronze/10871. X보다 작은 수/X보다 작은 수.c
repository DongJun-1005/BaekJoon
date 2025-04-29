#include <stdio.h>

int A[10000];
int X; //정수
int N; //정수의 개수
int main()
{
    scanf("%d %d",&N,&X);

    for(int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int j = 0; j < N; j++)
    {
        if(A[j] < X)
        {
            printf("%d ",A[j]);
        }
    }
    
}