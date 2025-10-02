#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) printf(" ");   // 앞 공백
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j != i) printf(" ");  // 별 사이 공백
        }
        printf("\n");
    }
    return 0;
}
