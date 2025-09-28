#include <stdio.h>

int parent[10001]={0,};
int score[10001]={0,};
int memo[10001]={0,};

int find(int a){
    if(parent[a]==a)return a;
    return parent[a] = find(parent[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX > RootY) parent[RootX] = RootY;
    else parent[RootY] = RootX;
}

int main(){
    int N, M, k;
    scanf("%d %d %d", &N, &M, &k);
    for(int i=1; i<=N; i++){
        parent[i]=i;
        scanf("%d", &score[i]);
    }
    for(int i=1; i<=M; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        my_union(a, b);
    }
    for(int i=1; i<=N; i++) memo[i] = 987654321;
    for(int i=1; i<=N; i++){
        int r = find(parent[i]);
        if(score[i]<memo[r])memo[r] = score[i];
    }
    int sum = 0;
    for(int i=1; i<=N; i++){
        if(memo[i] != 987654321) sum += memo[i];
    }
    if(k>=sum){
        printf("%d", sum);
    }
    else{
        printf("Oh no");
    }
    return 0;
}