/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << " " << c;               // float 변수 2개 출력하는 예제
// cout << d << " " << e << " " << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int t = 10;
    int i,j,k;

    for(i = 0; i < t; i++)
    {
        int N;
        int H[1000] = {0};
        int res = 0;

        scanf("%d",&N);

        for(j = 0; j < N; j++)
        {
            scanf("%d",&H[j]);
        }

        for(k = 2; k < N-2; k++)
        {
            int Lmax, Rmax, totalmax;

            if(H[k-1] > H[k-2])
            {
                Lmax = H[k-1];
            }
            else Lmax = H[k-2];

            if(H[k+1] > H[k+2])
            {
                Rmax = H[k+1];
            }
            else Rmax = H[k+2];

            if(Lmax > Rmax)
            {
                totalmax = Lmax;
            }
            else totalmax = Rmax;

            if(H[k] > totalmax)
            {
                res += H[k] - totalmax;
            }
        }
        printf("#%d %d\n",i+1,res);
    }
    
    return 0;
}