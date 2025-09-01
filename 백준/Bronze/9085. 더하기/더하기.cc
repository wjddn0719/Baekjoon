#include <iostream>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int sum = 0, k;
        for (int i = 0; i < n; i++) {
            scanf("%d", &k);
            sum += k;
        }
        printf("%d\n", sum);
    }
    return 0;
}
