#include <stdio.h>

int main(){
	int n=0, i=0, total=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		total+=i;
	}
	printf("%d", total);
	return 0;
}