#include <stdio.h>

int map[1000001]={0,};

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
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        map[i] = i;
    }
    for(int i=1; i<=m; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a==0){
            my_union(b, c);
        }
        else{
            if(find(b)==find(c))printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}