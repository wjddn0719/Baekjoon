#include <stdio.h>

int main(){
	long long int fibo[117]={0,1,1,1},a;
	scanf("%lld", &a);
	for(int i=4; i<=a; i++){
		fibo[i] = fibo[i-1] + fibo[i-3];
	}	
	printf("%lld", fibo[a]);
	return 0;
}