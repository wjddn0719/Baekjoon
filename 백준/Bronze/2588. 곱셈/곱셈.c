#include <stdio.h>

int main() {
	int a, d, e, f;
	scanf("%d %1d%1d%1d", &a, &d, &e, &f);
	printf("%d\n%d\n%d\n%d", a * f, a * e, a * d, a*(d*100+e*10+f));
	return 0;
}