#include <stdio.h>

int main(){
	char S[21]={0,}, D[200]={0,};
	int i, j,R=0,k , T=0, l;
	scanf("%d", &T);
	for(i=1; i<=T; i++){
		scanf("%d %s", &R, &S);
		for(j=0; S[j]!=0; j++){
			for(k=1; k<=R; k++){
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}