#include <stdio.h>

int main(){
    int A, B, C, i, map[10] = {0,}, m;
    scanf("%d %d %d", &A, &B, &C);
    int total = A * B * C;

    while (total != 0) {
        m = total % 10;
        map[m] += 1;
        total /= 10;
    }

    for (i = 0; i <= 9; i++) {
        printf("%d\n", map[i]);
    }

    return 0;
}
