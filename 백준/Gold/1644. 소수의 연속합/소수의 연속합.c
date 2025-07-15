#include <stdio.h>
long long int prime[4000001]={0,};
long long int is_prime[4000001]={0,};
int main(){
	long long int a;
	scanf("%lld", &a);
	for(long long int i=2; i<=a; i++){
		for(long long int j=i*i; j<=a; j+=i){
			prime[j]=1;
		}
	}
	long long int j=0;
	for(long long int i=2; i<=a; i++){
		if(prime[i]==0){
			is_prime[j]=i;
			j++;
		}
	}
	long long int total;
	for(total=0; is_prime[total]!=0; total++);
	long long int start_point = 0, end_point = 0, count=0, sum=0;
	while(start_point<=total && end_point<=total){
		if(sum>a){
			sum -= is_prime[start_point++];
		}
		else if(sum<a){
			sum+=is_prime[end_point++];
		}
		else if(sum==a){
			count++;
			sum+=is_prime[end_point++];
		}
	}
	printf("%lld", count);
	return 0;
}