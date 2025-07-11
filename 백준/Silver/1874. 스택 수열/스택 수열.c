#include <stdio.h>
	int a, stack[100001]={0,}, map[100001]={0,}, top = 0, l=1;
	char save[300001]={0,};
int main(){
	int Next_o=1, j=1;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		scanf("%d", &map[i]);
	}
	for(int i=1; i<=a; i++){
		while(Next_o<=map[i]){
			stack[++top] = Next_o++;
			save[j] = '+';
			j++;
		}
		if(stack[top] == map[i]){
			top--;
			save[j] = '-';
			j++;
		}
		else{
			printf("NO");
			return 0;
		}
	}
	for(int i=1; save[i]!=0; i++){
		printf("%c\n", save[i]);
	}
	return 0;
}