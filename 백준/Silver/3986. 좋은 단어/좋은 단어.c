#include <stdio.h>
#include <string.h>

#define MAX 100000

char stack[MAX];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

int pop()
{
    if(top == -1) return 0;
    top--;
    return 1;
}

int main()
{
    int N,i,j;
    char arr[MAX];
    int cnt = 0;
    scanf("%d",&N);

    for(i = 0; i < N; i++)
    {
        scanf("%s",arr);

        top = -1;

        for(j = 0; j < strlen(arr); j++)
        {
            if((top != -1) && arr[j] == stack[top])
            {
                pop();
            } 
            else
            {
                push(arr[j]);
            }
        }
        if(top == -1) cnt++;
    }

    printf("%d",cnt);
    return 0;
}