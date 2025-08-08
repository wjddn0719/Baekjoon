#include <stdio.h>

int main(){
	long long int a, map[101] = {0,1,1,1};
	scanf("%lld", &a);
	for(int i=4; i<=100; i++){
		map[i] = map[i-2] + map[i-3];
	}
	for(int i=1; i<=a; i++){
		int k;
		scanf("%d", &k);
		printf("%lld\n", map[k]);
	}
	return 0;
}