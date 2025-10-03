#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[105];

    while (n--) {
        scanf("%s", s);
        for (int i = 0; s[i]; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32; // 대문자 → 소문자
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
