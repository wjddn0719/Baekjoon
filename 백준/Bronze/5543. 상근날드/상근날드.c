#include <stdio.h>

int main(){
	int a[3], k[2], i,total=0, total1=0;
	for(i=0; i<=2; i++){
		scanf("%d", &a[i]);
	}
	total = (a[0]<a[1] ? a[0]:a[1])<a[2] ? (a[0]<a[1] ? a[0]:a[1]) : a[2];
	for(i=0; i<=1; i++){
		scanf("%d", &k[i]);
	}
	total1=k[0]<k[1] ? k[0]:k[1];
	printf("%d", total+total1-50);
	return 0; 
}