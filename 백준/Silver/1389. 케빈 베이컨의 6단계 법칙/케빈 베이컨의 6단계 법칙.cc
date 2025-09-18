#include <stdio.h>

#define INF 987654321

int min(int a, int b){
	return a<b ? a:b;
}

int map[101][101]={0,};
int sum[101]={0,};
int main(){	
	int N, M;
	scanf("%d %d", &N, &M);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(!(i==j)){
				map[i][j] = INF;
			}
		}
	}
	for(int i=1; i<=M; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[b][a] = 1;
	}
	for(int k=1; k<=N; k++){
		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
 			}
		}
	}
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			sum[i] += map[i][j];
		}
	}
	int mi = sum[1];
	int idx = 1;
	for(int i=1; i<=N; i++){
		if(mi>sum[i]){
			mi = sum[i];
			idx = i; 
		}
	}
	printf("%d\n",idx);
	return 0;
}