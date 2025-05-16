#include <stdio.h>

int main(){
	int X=0, N=0, a=0, b=0, i=0, total=0, j=0;
	scanf("%d %d", &X, &N);
	for(i=1; i<=N; i++){
		scanf("%d %d", &a, &b);
			for(j=1; j<=b; j++){
				total+=a;
			}
	}
	if(X==total)printf("Yes");
	else printf("No");
}