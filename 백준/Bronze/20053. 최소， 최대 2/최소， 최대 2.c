#include <stdio.h>

int main(){
    int N, K, i, j, T[1000000]={0,}, min=0, max=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &K);
        for(j=0; j<K; j++){
            scanf("%d", &T[j]);
        }
        max=T[0];
        min=T[0];
        for(j=1; j<K; j++){
            if(max>T[j])max=T[j];
            else if(min<T[j]) min=T[j];
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}