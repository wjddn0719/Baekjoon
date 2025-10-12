#include <stdio.h>

int main(void) {
    int n, x;
    if (scanf("%d", &n) != 1) return 0;
    while (n--) {
        scanf("%d", &x);
        printf("%d %d\n", x, x);
    }
    return 0;
}
