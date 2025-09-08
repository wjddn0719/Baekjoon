#include <stdio.h>

int dist[501]={0,};
int save[501] = {0,};
int cyc[501] = {0,};
int j =1;
int find(int a){
    if(dist[a] == a) return a;
    return dist[a] = find(dist[a]);
}

void my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX==RootY){
        cyc[RootX] = 1;
        return;
    }
    if(RootX > RootY){
        dist[RootX] = RootY;
    }
    else {
        dist[RootY] = RootX; 
    }
}

int main(){
    while(1){
        int n, m,sum =0;
        scanf("%d %d", &n, &m);
        for(int i=1; i<=n; i++){
            cyc[i] = 0;
        }
        if(!n && !m)return 0;
        for(int i=1; i<=n; i++){
            dist[i] = i;
        }
        for(int i=1; i<=n; i++){
            save[i] = 0;
        }
        for(int i=1; i<=m; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            my_union(a, b);
        }
        for (int i=1; i<=n; i++) {
            if (cyc[i]) cyc[find(i)] = 1;
        }
        for(int i=1; i<=n; i++){
            save[find(i)] = 1;
        }
        for(int i=1; i<=n; i++){
            if(save[i]==1 && cyc[i]!=1)sum++;
        }
        if(sum==1){
            printf("Case %d: There is one tree.\n", j++);
        }
        else if(sum>1){
            printf("Case %d: A forest of %d trees.\n", j++, sum);
        }
        else{
            printf("Case %d: No trees.\n", j++);
        }
    }
    return 0;
}