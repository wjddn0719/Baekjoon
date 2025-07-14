#include <stdio.h>

int top = 0;
int stack[100001]={0,};
int main(){
    int a, k;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%d", &k);
        if(k!=0){
            stack[top++]=k;
        }
        else{
            top--;
        }
    }
    int total = 0;
    for(int i=0; i<top; i++){
        total+=stack[i];
    }
    printf("%d", total);
}