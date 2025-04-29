#include <stdio.h>

int main(int argc, char *argv[])
{
   int stu[30] = {0,}; //배열 전체의 값 초기화
   int a;

   for(int i = 0; i < 28; i++)
   {
       scanf("%d",&a);
       stu[a-1] = a;

   }

    for(int j = 0; j < 30; j++)
   {
        if(stu[j] == 0)
        {
            printf("%d ",j+1);
        }
   }
    return 0;
}
