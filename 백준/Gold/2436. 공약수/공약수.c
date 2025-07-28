#include <stdio.h>

int map[1000001][3]={0,};
int k = 0;
int gcd_f(int i, int j){
	if(i%j==0)return j;
	return gcd_f(j, i%j);
}
int main(){
	int gcd, lcm;
	scanf("%d %d", &gcd, &lcm);
	int a = lcm/gcd;
	for(int i = 1; i * i <= a; i++){
		if(a % i == 0){
			int j = a / i;
			if(gcd_f(i, j) == 1){
				map[k][1] = i;
				map[k][2] = j;
				k++;
			}
		}
	}
	int min = 0;
	for(int i=1; i<k; i++){
		if(map[min][1]+map[min][2] > map[i][1] + map[i][2])min = i; 
	}
	printf("%d %d", map[min][1] * gcd, map[min][2] * gcd);
	return 0;
}