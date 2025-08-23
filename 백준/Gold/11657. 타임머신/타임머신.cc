#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#define INF 987654321
using namespace std;
vector<pair<int,int>> edge[501];
long long int map[501]={0,};
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        map[i] = INF;
    }
    for(int i=1; i<=M; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        edge[a].push_back({b,c});
    }
    map[1] = 0;
    for(int iter=1; iter<=N-1; iter++){
        for(int i=1; i<=N; i++){
            for(int j=0; j<edge[i].size(); j++){
                int u = i;
                int v = edge[i][j].first;
                int w = edge[i][j].second;
                if(map[u]==INF)continue;
                if(map[u] + w < map[v]){
                    map[v] = map[u] + w;
                }
            }
        }
    }
    long long int J_map[501]={0,};
    for(int i=1; i<=N; i++){
        J_map[i] = map[i];
    }
    for(int i=1; i<=N; i++){
        for(int j=0; j<edge[i].size(); j++){
            int u = i;
            int v = edge[i][j].first;
            int w = edge[i][j].second;
            if(map[u]==INF)continue;
            if(map[u] + w < map[v]){
                map[v] = map[u] + w;
            }
            if(map[v]!=J_map[v]){
                printf("%d",-1);
                return 0;
            }
        }
    }
    for(int i=2; i<=N; i++){
        if(map[i]==INF){
            printf("%d\n",-1);
        }
        else{
            printf("%d\n", map[i]);
        }
    }
    return 0;
}