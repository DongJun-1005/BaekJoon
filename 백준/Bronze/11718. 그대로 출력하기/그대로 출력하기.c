#include <stdio.h>

int main() {

    char S[100];

    while (scanf("%[^\n]", S) != EOF) {
        printf("%s\n", S);
        getchar();
    }

    return 0;
}