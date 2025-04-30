#include <stdio.h>

int main()
{
    int money[6] = {500,100,50,10,5,1};
    int x,i = 0,cnt = 0;

    scanf("%d",&x);
    int res = 1000 - x;

    while(res > 0)
    {  
        if(money[i] <= res)
        {
            res -= money[i];
            cnt++;
        }
        else
            i++;
    }

    printf("%d\n",cnt);

    return 0;
}