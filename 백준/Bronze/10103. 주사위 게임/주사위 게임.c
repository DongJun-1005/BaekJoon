#include <stdio.h>

int main()
{
    int x = 100; //창영이 점수
    int y = 100; // 상덕이 점수
    int n,i;
    int a,b; // a > 창영이 주사위 b > 상덕이 주사위

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        
        if(a < b)
        {
            x = x - b;
        }
        else if(a > b)
        {
            y = y - a;
        }
        else if(a == b)
        {
            continue;
        }
    }
    printf("%d\n",x);
    printf("%d\n",y);
}