#include <stdio.h>
#include <string.h>

#define MAX 51
char stack[MAX];
int top = -1;

void push(char ch)
{
    top++; // top -1에서 0으로 증가
    stack[top] = ch;
}

int pop()
{
    if(top == -1) return 0;
    top--;
    return 1;
}

int res(char* str)
{
    top = -1;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == '(')
        {
            push('(');
        }
        else if (str[i] == ')')
        {
            if(!pop()) return 0;
        }
    }

    return (top == -1);
}


int main()
{
    int T; // 테스트 케이스의 개수
    char cmd[51];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",cmd);

        if(res(cmd))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }

    return 0;
}