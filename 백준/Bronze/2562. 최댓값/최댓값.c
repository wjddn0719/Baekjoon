#include <stdio.h>

int main(){
	int N[10]={0,}, i=0;
	for(i=1; i<=9; i++){
		scanf("%d", &N[i]);
	}
	int total=N[1];
	for(i=1; i<=9; i++){
		if(total<N[i]){
			total = N[i];
		}
	}
	printf("%d\n", total);
	for(i=1; ; i++){
		if(N[i]==total){
			printf("%d", i);
			break;
		}
		else continue;
	}
	return 0;
}