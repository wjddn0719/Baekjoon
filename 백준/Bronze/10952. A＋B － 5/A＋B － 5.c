#include <stdio.h>

int main(){
	int A=0, B=0;
	while(1){
		scanf("%d %d", &A, &B);
		if(A!=0&&B!=0){
			printf("%d\n", A+B);
		}
		else break;
	}
	return 0;
}