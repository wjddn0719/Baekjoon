#include <stdio.h>

int main(){
	int N=0, M=0, i=0, j=0, I=0, J=0, total=0;
	scanf("%d %d", &N, &M);
	int data[N+1];
	for(I=1; I<=N; I++){
		data[I]=0;
	}
	for(I=1; I<=N; I++){
		data[I]=I;
	}
	for(J=1; J<=M; J++){
		scanf("%d %d", &i, &j);
		total=data[i];
		data[i]=data[j];
		data[j]=total;
	}
	for(I=1; I<=N; I++){
		printf("%d ", data[I]);
	}
	return 0;
}