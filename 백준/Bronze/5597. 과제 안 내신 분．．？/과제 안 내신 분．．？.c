#include <stdio.h>

int main(){
	int N[31], i=0, j=0;
	for(i=1; i<=30; i++){
		N[i]=1;
	}
	for(i=1; i<=28; i++){
		scanf("%d", &j);
		N[j]=0;
	}
	for(i=1; i<=30; i++){
		if(N[i]==1){
			printf("%d\n", i);
		}
	}
	return 0;
}
