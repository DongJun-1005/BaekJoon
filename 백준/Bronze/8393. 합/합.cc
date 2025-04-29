#include <stdio.h>

int n;
int sum = 0;
int main()
{
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;

    }
    printf("%d",sum);
}