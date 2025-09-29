#include <stdio.h>

int parent[100001]={0,};
int keep[100001]={0,};

int find(int a){
    if(parent[a]==a)return a;
    return parent[a] = find(parent[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX<RootY)parent[RootY] = RootX;
    else parent[RootX] = RootY;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        parent[i] = i;
    }
    int cycle = 0;
    for(int i=1; i<=M; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        if(find(u)==find(v)) cycle++;  
        else my_union(u,v); 
    }
    for(int i=1; i<=N; i++){
        keep[find(i)] = 1;
    }
    int count = -1;
    for(int i=1; i<=N; i++){
        if(keep[i])count++;
    }
    printf("%d", count + cycle);
    return 0;
}