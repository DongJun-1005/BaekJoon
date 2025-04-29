#include <stdio.h>

int main()
{
    char S[100]; //입력받은 문자열 저장
    int a[26]; //알파벳 자리
    int i;
    int n;
    
    for(i = 0; i < 26; i++) // 조건에 맞게 배열 초기화
    {
        a[i] = -1;
    }

    scanf("%s",S); // 단어입력

    for(i = 0; i < strlen(S); i++)
    {
        n = S[i]-'a'; // **
        if(a[n] == -1)
        {
            a[n] = i;
        }
    }

    for(i = 0; i < 26; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
