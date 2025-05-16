#include <stdio.h>

int main(){
	int total=0,a[5]={0,}, i;
	for(i=0; i<=4; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<=4; i++){
		total+=a[i]*a[i];
	}
	printf("%d", total%10);
	return 0;
}