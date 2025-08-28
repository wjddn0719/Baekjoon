#include <iostream>
#include <queue>
#include <utility>
#include<vector>
#define INF 987654321;
using namespace std;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> edge[1001];
int map[100001]={0,};

void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        pq.pop();
        if(currentValue > map[current]) continue;
        for(int i=0; i<edge[current].size(); i++){
            int next = edge[current][i].first;
            int nextValue = edge[current][i].second;
            if(currentValue + nextValue < map[next]){
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
        edge[a].push_back({b,c});
    }
    int start, end;
    scanf("%d %d", &start, &end);
    pq.push({0, start});
    dijkstra();
    printf("%d", map[end]);
}