#include <stdio.h>

int main(){
	char Data[101]={0,};
	int i=0;
	scanf("%s", &Data);
	while(Data[i]!=0){
		i++;
	}
	printf("%d", i);
	return 0;
}