#include <stdio.h>

int main(){
	int T=0, i=0, j;
	char data[1001]={0,};
	scanf("%d", &T);
	for(i=1; i<=T; i++){
		scanf("%s", &data);
		for(j=1; data[j]!=0; j++){
		}
		printf("%c%c\n", data[0], data[j-1]);
	}
	return 0;
}