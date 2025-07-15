#include <stdio.h>
long long int prime[1000001]={0,};
long long int is_prime[1000001]={0,};
int main(){
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	for(long long int i=2; i<=b; i++){
		for(long long int j=i*i; j<=b; j+=i){
			prime[j] = 1;
		}
	}
	long long int j=0;
	for(long long int i=a; i<=b; i++){
		if(prime[i]==0 && i!=1){
			is_prime[j]=i;
			j++;
		}
	}
	for(long long int i=0; is_prime[i]!=0; i++){
		printf("%lld\n", is_prime[i]);
	}
	return 0;
}