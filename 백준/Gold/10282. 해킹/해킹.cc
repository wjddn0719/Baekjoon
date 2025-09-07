#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#define INF 987654321
using namespace std;
int dist[10001]={0,};
vector<pair<int, int>> node[10001];
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        pq.pop();
        for(int i=0; i<node[current].size(); i++){
            int next = node[current][i].first;
            int nextValue = node[current][i].second;
            if(currentValue + nextValue < dist[next]){
                dist[next] = currentValue + nextValue;
                pq.push({dist[next], next});
            }
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int n, d, c;
        while(!pq.empty())pq.pop();
        scanf("%d %d %d", &n, &d, &c);
        for(int j=1; j<=n; j++){
            dist[j] = INF;
        }
        int a, b, s;
        for(int j=1; j<=d; j++){
            scanf("%d %d %d", &a, &b, &s);
            node[b].push_back({a,s});
        }
        dist[c] = 0;
        pq.push({0,c});
        dijkstra();
        int counte = 0;
        for(int i=1; i<=n; i++){
            if(dist[i]!=INF)counte++;
        }
        int max = 0;
        for(int i=1; i<=n; i++){
            if(dist[i]<INF)max = dist[i];
            break;
        }
        for(int i=1; i<=n; i++){
            if(dist[i]<INF && max<dist[i])max = dist[i];
        }
        printf("%d %d\n", counte, max);
        for(int j=1; j<=n; j++){
            node[j].clear();
        }
        
    }
    return 0;
}