#include <iostream>
#include <queue>
#include<vector>
#include<utility>
#define INF 987654321 
using namespace std;
int s, t;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> node[5001];

int map[5001]={0,};
int parent[2001]={0,};

void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        if(current == t) return;
        pq.pop();
        for(int i=0; i<node[current].size(); i++){
            int next = node[current][i].first;
            int nextValue = node[current][i].second;
            if(map[next] > nextValue + currentValue){
                map[next] = nextValue + currentValue;
                pq.push({map[next], next});
            }
        }
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        map[i] = INF;
    }
    for(int i=1; i<=m; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        node[a].push_back({b,c});
        node[b].push_back({a,c});
    }
    scanf("%d %d", &s, &t);
    pq.push({0,s});
    map[s] = 0;
    dijkstra();
    printf("%d", map[t]);
}