#include <stdio.h>

int main(){
	int N=0, X=0, A=0, i=0;
	scanf("%d %d", &N, &X);
	int O[N];
	for(i=1; i<=N; i++){
		scanf("%d", &O[i]);
		if(O[i]<X){
			printf("%d ", O[i]);
		}
	}
	return 0;
}