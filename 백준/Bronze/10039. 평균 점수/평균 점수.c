#include <stdio.h>

int main(){
    int a, result=0;
    for(int i=1; i<=5; i++){
        scanf("%d", &a);
        if(a<40)a=40;
        result+=a;
    }
    printf("%d", result/5);
}