#include <stdio.h>

int main()
{
    int N[8] = {0};
    int i;
    int j = 1, k = 1; //j는 ascending일때 , k는 descending일때


    for(i = 0; i < 8; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i = 0; i < 8; i++)
    {
        if(N[i] != i+1)
        {
            j = 0;
        }
        if(N[i] != 8-i)
        {
            k = 0;
        }
    }

    if(j == 1)
    {
        printf("ascending");
    }
    else if(k == 1)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }

    return 0;

}