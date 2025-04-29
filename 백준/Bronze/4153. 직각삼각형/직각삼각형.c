#include <stdio.h>

int main()
{
    int i,num[3] = {0,};

    while(1)
    {
        int max = 0;
        int min = 0;
        int mid = 0;
        int cnt = 0;

        for(i = 0; i < 3; i++)
        {
            scanf("%d",&num[i]);

            if(num[0] == 0 && num[1] == 0 && num[2] == 0)
            {
                cnt++;
                break;
            }
            
            int temp = 0;

            min = num[0];
            mid = num[1];
            max = num[2];
            
            if(min > mid)
            {
                temp = min;
                min = mid;
                mid = temp;
            }

            if(mid > max)
            {
                temp = mid;
                mid = max;
                max = temp;
            }

            if(min > max)
            {
                temp = min;
                min = max;
                max = temp;
            }
            
        }
        if(cnt == 1)
        {
            break;
        }
        if(max*max == mid*mid + min*min)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}