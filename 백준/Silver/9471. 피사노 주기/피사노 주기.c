#include <stdio.h>

int main(){
	int P,M, N,j;
	scanf("%d", &P);
	for(int i=1; i<=P; i++){
		int map[1000001]={0,1};
		scanf("%d %d", &N, &M);
		for(j=2; ; j++){
			map[j] = (map[j-1] + map[j-2])%M;
			if(map[j-1] == 0 && map[j] == 1)break;
		}
		printf("%d %d\n",N, j-1);
	}
	return 0;
}