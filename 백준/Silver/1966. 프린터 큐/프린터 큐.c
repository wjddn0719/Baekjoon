#include <stdio.h>

void push(int *arr, int N){
	int temp = arr[0];
	for(int i=0; i<N-1; i++){
		arr[i] = arr[i+1];
	}
	arr[N-1] = temp;
}

void pop(int *arr, int N){
	for(int i=0; i<N-1; i++){
		arr[i] = arr[i+1];
	}
	arr[N-1] = 0;
}

int search_Max(int *arr, int N){
	int max = arr[0];
	for(int i=0; i<N; i++){
		if(max<arr[i])max=arr[i];
	}
	return max;
}

void ma(int *arr, int M, int N){
	int count = 0;
	while(1){
		int max = search_Max(arr, N);
		if(max>arr[0]){
			push(arr, N);
			M = (M == 0) ? N - 1 : M - 1;
		}
		else{
			count++;
			if(M==0){
				printf("%d\n", count);
				return;
			}
			pop(arr, N);
			M--;
			N--;
		}
	}
}

int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		int N, M, map[101]={0,};
		scanf("%d %d", &N, &M);
		for(int j=0; j<N; j++){
			scanf("%d", &map[j]);
		}
		ma(map, M, N);
	}
	return 0;
}