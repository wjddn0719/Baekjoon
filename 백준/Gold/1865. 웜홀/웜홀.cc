#include <iostream>
#include <vector>
#include <utility>
#define INF 987654321
using namespace std;
vector<pair<int,int>> edge[501];
int main(){
    int TC;
    scanf("%d", &TC);
    for(int i=1; i<=TC; i++){
        int N, M, W;
        scanf("%d %d %d", &N, &M, &W);
        for (int j=1; j<=N; j++) edge[j].clear();
        int map[501]={0,};
        map[1] = 0;
        for(int j=1; j<=M; j++){
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            edge[a].push_back({b,c});
            edge[b].push_back({a,c});
        }
        for(int j=1; j<=W; j++){
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            edge[a].push_back({b,-c});
        }
        for(int j=1; j<=N-1; j++){
            for(int l=1; l<=N; l++){
                for(int k=0; k<edge[l].size(); k++){
                    int u = l;
                    int v = edge[l][k].first;
                    int w = edge[l][k].second;
                    if(map[u]==INF)continue;
                    if(map[u] + w < map[v]){
                        map[v] = map[u] + w;
                    }
                }   
            }
        }
        int j_map[501]={0,};
        for(int j=1; j<=N; j++){
            j_map[j] = map[j];
        }
        for(int l=1; l<=N; l++){
            for(int k=0; k<edge[l].size(); k++){
                int u = l;
                int v = edge[l][k].first;
                int w = edge[l][k].second;
                if(map[u]==INF)continue;
                if(map[u] + w < map[v]){
                    map[v] = map[u] + w;
                }
            }   
        }
        int flag = 1;
        for(int j=1; j<=N; j++){
            if(map[j]!=j_map[j]){
                flag = 0;
            }
        }
        if(flag == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
