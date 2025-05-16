#include <stdio.h>

int main(){
	int H=0, M=0, B=0;
	scanf("%d %d\n%d", &H, &M, &B);
	if(M+B<60) M+=B;
	else if(M+B>=60){
		H=H+(M+B)/60;
		M=(M+B)%60;
		if(H>=24){
			H-=24;
		}
	}
	printf("%d %d",H, M);
	return 0;
	}