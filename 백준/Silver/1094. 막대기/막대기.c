#include <stdio.h>

int stick = 64;

int main(){
	int X, count = 0;
	scanf("%d", &X);
	
	while(1){
		if(X==0){
			printf("%d", count);
			return 0;
		}
		if(X < stick){
			stick/=2;
			continue;
		}
		if(X >= stick){
			X -= stick;
			stick/=2;
			count++;	
		}
	}
}