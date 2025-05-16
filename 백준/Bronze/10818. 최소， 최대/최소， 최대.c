#include <stdio.h>

int main(){
	int N=0, i=0, j=0;
	scanf("%d", &N);
	int data[N];
	for(i=1; i<=N; i++){
		scanf("%d", &data[i]);
	}
	int	total=data[1], total_1=data[1];
	for(i=1; i<=N; i++){
		if(total>data[i]){
			total=data[i];
		}
	}
	for(i=1; i<=N; i++){
		if(total_1<data[i]){
			total_1=data[i];
		}
	}
	printf("%d %d", total, total_1);
	return 0;
}