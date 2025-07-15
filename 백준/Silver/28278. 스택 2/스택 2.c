#include <stdio.h>
int top = 0;
int stack[1000000] = {0};
void push(int *arr){
    scanf("%d", &arr[top++]);
}

void top_f(int *arr){
    if(top <= 0){
        printf("-1\n");
        return;
    }
    printf("%d\n", arr[top - 1]);
}

void pop(int *arr){
    if(top <= 0){
        printf("-1\n");
        return;
    }
    printf("%d\n", arr[--top]);
}

void size(){
    printf("%d\n", top);
}

void empty(){
    printf("%d\n", top == 0 ? 1 : 0);
}

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int K;
        scanf("%d", &K);
        if(K == 1) push(stack);
        else if(K == 2) pop(stack); 
        else if(K == 3) size();
        else if(K == 4) empty();
        else if(K == 5) top_f(stack);
    }
    return 0;
}