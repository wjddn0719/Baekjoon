#include <stdio.h>

int main(){
	int M, H;
	scanf("%d %d", &H, &M);
	if(M>=45){
		M-=45; 
	}
	else if(M<45){
		if(H!=0){
		H-=1;
		M=M-45+60;
	}
	else if(H==0){
		H=23;
		M=M-45+60;
	}
	}
	printf("%d %d", H, M);
	return 0;
}