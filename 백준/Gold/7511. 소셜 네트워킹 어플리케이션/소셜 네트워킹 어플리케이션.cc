#include <stdio.h>

int parent[1000001]={0,};

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
    int T;
    scanf("%d", &T);
    for(int i=1; i<=T; i++){
        printf("Scenario %d:\n", i);
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        for(int j=1; j<=a; j++){
            parent[j] = j;
        }
        for(int j=1; j<=b; j++){
            int c, d;
            scanf("%d %d", &c, &d);
            my_union(c, d);
        }
        int e;
        scanf("%d", &e);
        for(int j=1; j<=e; j++){
            int f, g;
            scanf("%d %d", &f, &g);
            if(find(f)==find(g))printf("1\n");
            else printf("0\n");
        }
        printf("\n");
    }
    return 0;
}