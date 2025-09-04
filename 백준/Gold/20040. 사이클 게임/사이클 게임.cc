#include <stdio.h>

int parent[500001]={0,};

int find(int a){
    if(parent[a]==a)return a;
    return parent[a] = find(parent[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX > RootY)parent[RootX] = RootY;
    else parent[RootY] = RootX;
}


int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
    for(int i=1; i<=m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(find(a) == find(b)){
            printf("%d\n", i);
            return 0;
        }
        my_union(a, b);
    }
    printf("%d\n", 0);
    return 0;
}