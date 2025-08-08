#include <stdio.h>

int main(){
	int x1, y1;
	int M1[101][101]={0,}, M2[101][101]={0,}, M3[101][101]={0,};
	scanf("%d %d", &x1, &y1);
	for(int i=1; i<=x1; i++){
		for(int j=1; j<=y1; j++){
			scanf("%d",&M1[i][j]);
		}
	}
	int x2, y2;
	scanf("%d %d", &x2, &y2);
	for(int i=1; i<=x2; i++){
		for(int j=1; j<=y2; j++){
			scanf("%d", &M2[i][j]);
		}
	}
	for(int i=1; i<=x1; i++){
		for(int j=1; j<=y2; j++){
			for(int k=1; k<=x2; k++){
				M3[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
	for(int i=1; i<=x1; i++){
		for(int k=1; k<=y2; k++){
			printf("%d ", M3[i][k]);
		}
		printf("\n");
	}
	return 0;
}