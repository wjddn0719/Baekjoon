#include <iostream>
#include <queue>
#include<utility>
#include <vector>
using namespace std;
#define INF 987654321
vector<pair<int,int>> node[20001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int dis[20001]={0,};

void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        pq.pop();
        for(int i=0; i<node[current].size(); i++){
            int next = node[current][i].first;
            int nextValue = node[current][i].second;
            if(currentValue + nextValue < dis[next]){
                dis[next] = currentValue + nextValue;
                pq.push({dis[next], next});
            }
        }
    }
}

int main(){
    int N;
    int i=1;
    while(1){
        scanf("%d", &N);
        for(int i=1; i<=N*N; i++) node[i].clear();
        if(N==0){
            return 0;
        }
        for(int i=1; i<=N*N; i++){
            dis[i] = INF;
        }
        int map[20001]={0,};
        for(int i=1; i<=N*N; i++){
            scanf("%d", &map[i]);
        }
        for(int i=1; i<=N*N; i++){
            if(i%N != 1) node[i].push_back({i-1,map[i-1]});
            if(i%N!=0) node[i].push_back({i+1, map[i+1]});
            if(i-N >= 1) node[i].push_back({i-N,map[i-N]});
            if(i+N<=N*N) node[i].push_back({i+N, map[i+N]});
        }
        dis[1] = map[1];
        pq.push({dis[1], 1});
        dijkstra();
        printf("Problem %d: %d\n",i++, dis[N*N]);
    }
}