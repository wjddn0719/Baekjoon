#include <stdio.h>
int top = 0;
void push(int *arr){
	scanf("%d\n", &arr[top++]);
}
void top_f(int *arr){
	if(top<=0){
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[top-1]);
}
void pop(int *arr){
	if(top<=0){
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[top-1]);
	arr[top--] = 0;
}
void size(){
	printf("%d\n", top);
}
void empty(){
	if(top<=0)printf("1\n");
	else printf("0\n");
}
int main(){
	int stack[10000]={0,};
	int N;
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		char word[10]={0,};
		scanf("%s", word);
		if(word[0]=='p' && word[1]=='u')push(stack);
		else if(word[0] == 't')top_f(stack);
		else if(word[0] =='p')pop(stack); 
		else if(word[0] == 's')size();
		else empty();
	}
	return 0;
}