#include <stdio.h>

int map[1001][1001]={0,}, DFS_write[1001]={0,},BFS_write[1001]={0,}, que[1001]={0,};

void DFS(int v, int N){
    DFS_write[v] = 1;
    printf("%d ", v);
    for(int i=1; i<=N; i++){
        if(map[v][i]==1 && DFS_write[i]!=1){
            DFS(i, N);
        }
    }
}

void BFS(int V, int N){
    int front = -1, rear = -1;
    que[++rear] = V;
    BFS_write[V] = 1;
    while(front<rear){
        V = que[++front];
        printf("%d ", V);
        for(int i=1; i<=N; i++){
            if(map[V][i]==1 && BFS_write[i]==0){
                BFS_write[i]=1;
                que[++rear] = i;
            }
        }
    }

}

int main(){
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);
    for(int i=1; i<=M; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
        map[b][a] = 1;
    }
    DFS(V, N);
    printf("\n");
    BFS(V, N);
    return 0;
}