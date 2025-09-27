#include <cstdio>

int parent[100001];

int find(int a){
    if(parent[a]==a)return a;
    return parent[a] = find(parent[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX<RootY) parent[RootY] = RootX;
    else parent[RootX] = RootY;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        parent[i] = i;
    }
    for(int i=1; i<=M; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        my_union(a,b);
    }
    int keep[100001]={0,};
    for(int i=1; i<=N; i++){
        scanf("%d", &keep[i]);
    }
    int count = 0;
    for(int i=1; i<=N-1; i++){
        if(find(keep[i])!=find(keep[i+1]))count++;
    }
    printf("%d", count);
    return 0;
}