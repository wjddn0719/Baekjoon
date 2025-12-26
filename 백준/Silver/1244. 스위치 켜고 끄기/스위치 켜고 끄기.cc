#include <stdio.h>

int idx, map[101] = {0,};

void man(){
	int M;
	scanf("%d", &M);
	int L = M;
	while(L <= idx){
		map[L] == 0 ? map[L] = 1 : map[L] = 0;
		L+=M;
	}
}

void woman(){
	int M;
	scanf("%d", &M);
	map[M] == 0 ? map[M] = 1 : map[M] = 0; 
	int left = M - 1;
	int right = M + 1;
	
	while(left >= 0 && right <= idx){
		if(map[left] == map[right]){
			map[left] == 0 ? map[left] = 1 : map[left] = 0;
			map[right] == 0 ? map[right] = 1 : map[right] = 0;
			left--;
			right++;
			continue;
		}
		return;
	}
}

int main(void){
	scanf("%d", &idx);
	for(int i=0; i<=100; i++){
		map[i] = 2;
	}
	for(int i=1; i<=idx; i++){
		scanf("%d", &map[i]);
	}
	int K;
	scanf("%d", &K);
	for(int i=1; i<=K; i++){
		int sex;
		scanf("%d", &sex);
		sex == 1 ? man() : woman();
	}
	for(int i=1; i<=idx; i++){
		printf("%d ", map[i]);
		if(i%20==0) printf("\n");
	}
	return 0;
}