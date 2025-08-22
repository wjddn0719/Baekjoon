#include <iostream>
#include <vector>
#include <queue>   
#include <utility> 
#include <stack>
using namespace std;
#define INF 987654321
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> adj[20001];
int map[20001]={0,};
int max = 0;
void dijkstra(int start,int V){
    for(int i=1; i<=V; i++) map[i] = INF;
    pq = priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>();
    map[start] = 0;
    pq.push({0, start});
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
    vector<int> go(V+1);
    for(int i=1; i<=V; i++){
        dijkstra(i, V);
        go[i] = map[K];
    }
    vector<int> back(V+1);
    dijkstra(K, V);
    for(int i=1; i<=V; i++){
        back[i] = map[i]; 
    }
    int max = go[1] + back[1];
    for(int i=2; i<=V; i++){
        if(max < go[i] + back[i])max = go[i] + back[i];
    }
    printf("%d", max);
    return 0;
}
