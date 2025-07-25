#include <stdio.h>

int gcd(int a, int b){
	if(b==0)return a;
	return gcd(b, a%b);
}

int main(){
	int a, k;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		scanf("%d", &k);
		int map[101]={0,};
		long long int result = 0; 
		for(int j=1; j<=k; j++){
			scanf("%d", &map[j]);
		}
		for(int j=1; j<=k-1; j++){
			for(int o=j+1; o<=k; o++){
				result+=gcd(map[j]>map[o] ? map[j]:map[o],map[j]>map[o] ? map[o]:map[j]);
			}
		}
		printf("%lld\n", result);
	}
	return 0;
}