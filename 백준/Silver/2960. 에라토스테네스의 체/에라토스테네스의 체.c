#include <stdio.h>

int main(){
    int N, K, map[1001]={0,0,2};
    scanf("%d %d", &N, &K);
    for(int i=3; i<=N; i++){
        map[i] = i;
    }
    int count = 0;
    for(int i=2; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            if(map[j] != 0){
                count++;
            }
            map[j] = 0;
            if(count == K){
                printf("%d", j);
                return 0;   
            }
        }
    }
}