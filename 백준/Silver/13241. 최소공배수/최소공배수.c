#include <stdio.h>

long long int gcd(long long int a, long long int b){
	if(a%b==0)return b;
	return gcd(a<b ? a:b, a%b);
}



int main(){
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	long long int gc = gcd(a>b ? a:b, a>b?b:a);
	printf("%lld", a*b/gc);
	return 0;
}