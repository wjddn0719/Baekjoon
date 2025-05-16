#include <stdio.h>

int main(){
	int N=0, M=0, i=0, j=0, k=0, O=0, I=0;
	scanf("%d %d", &N, &M);
	int m[N+1];
	for(i=1; i<=N; i++){
		m[i]=0;
	}
	for(O=1; O<=M; O++){
		scanf("%d %d %d", &i, &j, &k);
		for(I=i; I<=j; I++){
			m[I]=k;
		}
	}
	for(I=1; I<=N; I++){
		printf("%d ", m[I]);
	}
	return 0;
} 