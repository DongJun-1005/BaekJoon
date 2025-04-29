#include <stdio.h>

int main()
{
    int n,x,y,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            printf("NO BRAINS\n");
        }
        else if(x>=y)
        {
            printf("MMM BRAINS\n");
        }
    }
}
