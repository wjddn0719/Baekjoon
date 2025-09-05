#include <stdio.h>

int parent[201]={0,};

int find(int a){
    if(parent[a]==a)return a;
    return parent[a] = find(parent[a]);
}

void my_union(int j, int K){
    int RootX = find(j);
    int RootY = find(K);
    if(RootX>RootY)parent[RootX] = RootY;
    else parent[RootY] = RootX;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        parent[i] = i;
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            int K;
            scanf("%d", &K);
            if(K==1) my_union(i, j);
        }
    }
    int a;
    scanf("%d", &a);
    a = find(a);
    for(int i=1; i<=M-1; i++){
        int b;
        scanf("%d", &b);   
        b = find(b); 
        if(a!=b){
            printf("NO");
            return 0;
        }    
        a = b;
    }
    printf("YES");
    return 0;
}