#include <stdio.h>

int main(){
	int a[6]={1,1,2,2,2,8}, k[6]={0,},i, total=0;
	for(i=0; i<=5; i++){
		scanf("%d", &k[i]);
	}
	for(i=0; i<=5; i++){
		if(a[i]>=k[i])k[i]=a[i]-k[i];
		else k[i]=-(k[i]-a[i]);
	}
	for(i=0; i<=5; i++){
		printf("%d ", k[i]);
	}
	return 0;
}