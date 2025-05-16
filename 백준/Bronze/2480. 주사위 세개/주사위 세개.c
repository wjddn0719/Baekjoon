#include <stdio.h>

int main(){
	int a=0, b=0, c=0, total =0;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b&&b==c)total = 10000+a*1000;
	else if(a==b||a==c||b==c){
		if(a==b||a==c){
			total = 1000+a*100;
		}
		else if(a==b||b==c){
			total = 1000+b*100;
		}
	} 
	else if(a!=b&&b!=c){
		
		total = (a>b ? a:b)>c ? (a>b ? a:b):c;
		total = total * 100;
	}
	printf("%d", total);
}