#include <stdio.h>

int main(){
	int N, K, map[100001]={0,}, ma[100001]={0,};
	scanf("%d %d", &N, &K);
	for(int i=1; i<=N; i++){
		scanf("%d", &map[i]);
	}
	int s_p = 1, e_p = 0, sum = 0, k = 1;
	while(s_p<=N && e_p<=N){
		if(e_p-s_p+1!=K){
			sum+=map[++e_p];
		}
		else{
			ma[k] = sum;
			sum-=map[s_p++];
			k++;
		}
	}
	int max = ma[1];
	for(int i=1; i<k; i++){
		if(max<ma[i])max=ma[i];
	}
	printf("%d", max);
	return 0;
}