#include <stdio.h>

int main(){
	int N, total=0, i=0, Numero[101]={0,};
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%1d", &Numero[i]);
		total+=Numero[i];
	}
	printf("%d", total);
	return 0;
}