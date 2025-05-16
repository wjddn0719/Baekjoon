#include <stdio.h>

int main(){
	int N=0, i=0;
	scanf("%d", &N);
	for(i=N; i-=4<0; i-=4){
		printf("long ");
	}
	printf("int");
	return 0;
}