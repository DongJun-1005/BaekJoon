#include <stdio.h>
int T;
int A,B;

int main(int argc, char *argv[])
{
    scanf("%d",&T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);
        
    }

    return 0;
}
