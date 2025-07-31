#include <stdio.h>

int main(){
    int map[300000]={0,};
    for(int i=2; i*i<=300000; i++){
        for(int j = i * i; j<=300000; j+=i){
            map[j] = 1;
        }
    }
    int is_alpha[300000]={0,};
    int k =1;
    for(int i=2; i<=300000; i++){
        if(map[i] == 0){
            is_alpha[k] = i;
            k++;
        }
    }
    is_alpha[k] = 0;
    int a;
    while(1){
        int count = 0;
        scanf("%d", &a);
        if(a==0)return 0;
        for(int i=1; is_alpha[i]<=a*2; i++){
            if(is_alpha[i] > a)count++;
        }
        printf("%d\n", count);
    }
    return 0;
}