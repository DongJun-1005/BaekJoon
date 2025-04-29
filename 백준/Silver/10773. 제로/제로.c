#include <stdio.h>

#define MAX 100000

int stack[MAX];
int top = -1;

void push(int x)
{
    top++;
    stack[top] = x;
}

int pop()
{
    if(top == -1) return -1;
    return stack[top--];
}

int main()
{
    int k,i,num;
    int sum = 0;
    scanf("%d",&k);

    for(i = 0; i < k; i++)
    {
        scanf("%d",&num);

        if(num != 0)
        {
            push(num);
        }
        else
        {
            pop();
        }
    }
    
    for(i = 0; i <= top; i++)
    {
        sum += stack[i];
    }

    printf("%d",sum);

    return 0;

}