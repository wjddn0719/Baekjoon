#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#define INF 987654321
using namespace std;

int dist[1001];
vector<pair<int, int>> node[1001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

void dijkstra(){
    while(!pq.empty()){
        int currentvalue = pq.top().first;
        int current = pq.top().second;
        pq.pop();
        for(int i=0; i<node[current].size(); i++){
            int nextvalue = node[current][i].second;
            int next = node[current][i].first;
            if(nextvalue + currentvalue < dist[next]){
                dist[next] = nextvalue + currentvalue;
                pq.push({dist[next], next});
            }
        }
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<N; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        node[a].push_back({b,c});
        node[b].push_back({a,c});
    }
    for(int i=1; i<=M; i++){
        int K, V;
        while(!pq.empty())pq.pop();
        for(int j=1; j<=N; j++){
            dist[j] = INF;
        }
        scanf("%d %d", &K, &V);
        pq.push({0, K});
        dist[K]= 0;
        dijkstra();
        printf("%d\n", dist[V]);
    }
    return 0;
}