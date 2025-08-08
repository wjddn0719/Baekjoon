#include <stdio.h>

int main(){
	long long int N, V, map[100001]={0,}, count_v[100001]={0,};
	scanf("%lld %lld", &N, &V);
	for(int i=1; i<=N; i++){
		scanf("%lld", &map[i]);
	}
	int s_p = 1, e_p = 0, sum = 0, i=1;
	while(e_p<=N && s_p<=N){
		if(sum<V){
			sum+=map[++e_p];
		}
		else{
			count_v[i++] = e_p-s_p+1;
			sum-=map[s_p++];
		}
	}
	int min = count_v[1];
	for(int k=1; k<i; k++){
		if(min>count_v[k])min = count_v[k];
	}
	printf("%d", min);
	return 0;
}