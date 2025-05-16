#include <stdio.h>

int main(){
	int N=0,M=0, i=0,j=0;
	scanf("%d %d", &N, &M);
	int total=0,k,l,data[N+1];
	for(k=1; k<=N; k++){
		data[k]=k;
	}
	for(k=1; k<=M; k++){
		scanf("%d %d", &i, &j);
		for(l=i; l<=j; l++){
			total = data[l];
			data[l]=data[j];
			data[j]=total;
			j--;
		}
	}
	for(k=1; k<=N; k++){
		printf("%d ", data[k]);
	}
	return 0;
}