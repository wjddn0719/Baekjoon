#include <stdio.h>

int map[300001]={0,};
int dist[300001]={0,};
int find(int a){
    if(map[a]==a)return a;
    return map[a] = find(map[a]);
}

void my_union(int b, int c){
    int a = find(b);
    int y = find(c);
    if(a!=y){
        if(a>y)map[a] = map[y];
        else map[y] = map[a];
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        map[i] = i;
    }
    for(int i=1; i<=n-2; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        my_union(a, b);
    }
    for(int i=1; i<=n; i++){
        dist[find(map[i])] = 1;
    }
    for(int i=1; i<=n; i++){
        if(dist[i])printf("%d ", i);
    }
    return 0;
}