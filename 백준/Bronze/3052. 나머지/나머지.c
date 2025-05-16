#include <stdio.h>

int main(){
	int N[11], i=0, N1[42]={0,}, total=0, k=0, j=0, o=0;
	for(i=1; i<=10; i++){
		scanf("%d", &N[i]);
	}
	for(i=1; i<=10; i++){
		N[i]=N[i]%42;
	}
	for(i=1; i<=10; i++){
		total=N[i];
		N1[total]=1;
	}
	for(i=0; i<=41; i++){
		if(N1[i]==1){
			o+=1;
		}
	}
	printf("%d", o);
	return 0;
}