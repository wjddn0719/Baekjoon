#include <stdio.h>

int parent[100001]={0,};
long long int score[100001]={0,};
long long int keep[100001]={0,};

int find(int a){
    if(parent[a]==a) return a;
    return parent[a] = find(parent[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if (RootX == RootY) return;
    if(RootX < RootY){
        parent[RootY] = RootX;
        keep[RootX] += keep[RootY];
    } 
    else {
        parent[RootX] = RootY;
        keep[RootY] += keep[RootX];
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        parent[i] = i;
        scanf("%lld", &score[i]);
        keep[i] = score[i];
    }
    for(int i=1; i<=M; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        my_union(a, b);
        printf("%lld\n", keep[find(a)]);
    }
    return 0;
}