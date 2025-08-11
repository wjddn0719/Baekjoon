#include <stdio.h>

int map[32001][1000] = {0,}, N,M, score[32001]={0,},qu[32001]={0,};
int qu_idx = 0, qu_stp = 0;

void append(int a ,int b){
    int total = 1;
    for(int i=1; map[a][i]!=0; i++){
        total++;
    }
    map[a][total] = b;
    score[b]++;
    return;
}

void pop(){
    int a = qu[qu_stp++];
    printf("%d ", a);
    for(int i=1; map[a][i]!=0; i++){
        score[map[a][i]]--;
        if(score[map[a][i]]<1){
            qu[qu_idx++] = map[a][i];
        }
    }
}
int main(){
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M; i++){   
        int a, b;
        scanf("%d %d", &a, &b);
        append(a, b);
    }
    for(int i=1; i<=N; i++){
        if(score[i]==0){
            qu[qu_idx++] = i;
        }
    }
    while(qu_idx > qu_stp){
        pop();
    }
    return 0;
}