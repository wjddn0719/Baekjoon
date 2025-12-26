#include <stdio.h>

#define INF 987654321

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int minK = INF;
	int minL = INF;
	for(int i=1; i<=M; i++){
		int K, L;
		scanf("%d %d", &K, &L);
		if(minK > K) minK = K;
		if(minL > L) minL = L;
	}
	int total = 0;
	while(1){
		if(N >= 6){
			if(minK > minL * 6){
				total += minL * 6;
				N-=6;
			}
			else {
				total += minK;
				N-=6;
			}
		}
		else {
			if(minK > minL * N){
				total += minL * N;
				printf("%d", total);
				return 0;
			}
			else{
				total += minK;
				printf("%d", total);
				return 0;
			}
		}
	}
}