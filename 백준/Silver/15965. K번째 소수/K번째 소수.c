#include <stdio.h>

int map[10000001]={0,}, is_prime[10000001]={0,};

int main(){
	int N;
	for(int i=2; i*i<=10000000; i++){
		for(int j=i*i; j<=10000000; j+=i){
			map[j] = 1;
		}
	}
	int k =1;
	for(int i=2; i<=10000000; i++){
		if(map[i]==0){
			is_prime[k] = i;
			k++;
		}
	}
	scanf("%d", &N);
	printf("%d", is_prime[N]);
	return 0;
}