#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
#define INF 987654321
vector<pair<int,int>> node[50001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int map[50001];

void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        pq.pop();
        for(int i=0; i<node[current].size(); i++){
            int next = node[current][i].first;
            int nextValue = node[current][i].second;
            if(map[next] > currentValue + nextValue){
                map[next] = currentValue + nextValue;
                pq.push({map[next], next});
            }
        }
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++){
        map[i] = INF;
    }
    for(int i=1; i<=M; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        node[a].push_back({b,c});
        node[b].push_back({a,c});
    }
    pq.push({0,1});
    map[1] = 0;
    dijkstra();
    printf("%d", map[N]);
}