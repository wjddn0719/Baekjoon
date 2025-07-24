#include <stdio.h>

void dp(int k){
	int dop[41] = {0,1};
	for(int i=2; i<=k; i++){
		dop[i] = dop[i-1] + dop[i-2];
	}
	if(k==0){
		printf("1 0\n");
		return;
	}
	printf("%d %d\n", dop[k-1], dop[k]);
}

int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		int k;
		scanf("%d", &k);
		dp(k);
	}
	return 0;
}