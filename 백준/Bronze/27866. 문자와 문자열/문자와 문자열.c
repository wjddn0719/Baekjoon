#include <stdio.h>

int main(){
	char S[1001]={0,};
	int i=0;
	scanf("%s %d", &S, &i);
	printf("%c", S[i-1]);
	return 0;
}