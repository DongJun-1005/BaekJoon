#include <stdio.h>



int main() 
{
    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d\n",(b%100%10)*a); //3번의 값
    printf("%d\n",(b%100/10)*a); //4번의 값
    printf("%d\n",(b/100)*a); //5번의 값
    printf("%d",b*a); //3번의 값
    return 0;
}
