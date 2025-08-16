#include <iostream>
#include <vector>
#include <queue>   
#include <utility> 
using namespace std;
#define INF 987654321

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> adj[20001];
int map[20001]={0,};

void dijkstra(){
    while(!pq.empty()){
        int cost = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        for(int i=0; i<adj[now].size(); i++){
            int next = adj[now][i].first;
            int nextcost = adj[now][i].second;
            if(nextcost + cost < map[next]){
                map[next] = nextcost + cost;
                pq.push({map[next], next});
            }
        }
    }
}

int main(){
    int V, E, K;
    scanf("%d %d %d", &V, &E, &K);
    for(int i=1; i<=V; i++){
        map[i] = INF;
    }
    for(int i=1; i<=E; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        adj[a].push_back({b, c});
    }
    map[K] = 0;
    pq.push({0,K});
    dijkstra();
    for(int i=1; i<=V; i++){
        if(map[i]==INF){
            printf("INF\n");
        }
        else{
            printf("%d\n",map[i]);
        }
    }
    return 0;
}
