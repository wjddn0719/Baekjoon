#include <iostream>
#include <queue>
#include<utility>
#include <vector>
using namespace std;
#define INF 987654321
vector<pair<int,int>> node[20001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int dis[20001]={0,};
int map[20001]={0,};
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
    int M, N;
    scanf("%d %d", &M, &N);
    for(int i=1; i<=M*N; i++){
        dis[i] = INF;
    }
    for(int i=1; i<=M*N; i++){
        scanf("%1d", &map[i]);
    }
    for(int i=1; i<=M*N; i++){
        if(i%M != 1) node[i].push_back({i-1,map[i-1]});
        if(i%M!=0) node[i].push_back({i+1, map[i+1]});
        if(i-M >= 1) node[i].push_back({i-M,map[i-M]});
        if(i+M<=M*N) node[i].push_back({i+M, map[i+M]});
    }
    dis[1] = 0;
    pq.push({0,1});
    dijkstra();
    printf("%d", dis[N*M]);
    
}