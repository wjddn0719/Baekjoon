#include <stdio.h>

int main(){
	int N=0, v=0,i=0, total=0;
	scanf("%d", &N);
	int a[N];
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);
	for(i=0; i<N; i++){
		if(a[i]==v){
			total+=1;
		}
	}
	printf("%d", total);
	return 0;
}