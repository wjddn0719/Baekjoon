#include <stdio.h>

int main(){
	int i=0,T=0, A=0, B=0;
	scanf("%d", &T);
	for(i=1; i<=T; i++){
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
	return 0;
}