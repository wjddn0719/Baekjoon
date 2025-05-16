#include <stdio.h>

int main(){
	int N=0, i=0;
	scanf("%d", &N);
	float Data[N+1];
	for(i=0; i<=N; i++){
		Data[i]=0;
	}
	for(i=1; i<=N; i++){
		scanf("%d", &Data[i]);
	}
	float total=Data[1], rT=0;
	for(i=1; i<=N; i++){
		if(total<Data[i]){
			total = Data[i];
		}
	}
	for(i=1; i<=N; i++){
		Data[i]=Data[i]/total*100;
	}
	for(i=1; i<=N; i++){
		rT+=Data[i];
	}
	printf("%f", rT/N);
}