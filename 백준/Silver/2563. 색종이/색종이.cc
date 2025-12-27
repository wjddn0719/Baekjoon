#include <stdio.h>

bool map[10001] = {0,};

int main(){
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		int x,y;
		scanf("%d %d", &x, &y);
		for(int j = y; j<y+10; j++){
			for(int k = x; k<x+10; k++){
				map[(j-1)*100 + 1 + k] = 1;
			}
		}
	}
	int count = 0;
	for(int i = 1; i<=10000; i++){
		if(map[i] == 1) count++;
	}
	printf("%d", count);
	return 0;
}