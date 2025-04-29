#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int N, i;

    scanf("%d", &N);

    char S[N][21];
    char F[N-1][21];

    for (i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }
    for (i = 0; i < N-1; i++) {
        scanf("%s", F[i]);
    }

    qsort(F, N-1, sizeof(F[0]), cmp);

    for (i = 0; i < N; i++) {
        if (bsearch(S[i], F, N-1, sizeof(F[0]), cmp) == NULL) {
            printf("%s\n", S[i]);
            break;
        }
    }

    return 0;
}