#include <iostream>
#include <queue>
#include<utility>
#include <vector>
using namespace std;
#define INF 987654321
vector<pair<int,int>> node[20001];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
int r,m;
int sum_save[101]={0,};
int save[101]={0,};
int dist[101]={0,};
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
    int n;
    scanf("%d %d %d", &n, &m, &r);
    for(int i=1; i<=n; i++){
        scanf("%d", &save[i]);
    }
    for(int i=1; i<=r; i++){
        int a, b, l;
        scanf("%d %d %d", &a, &b, &l);
        node[a].push_back({b,l});
        node[b].push_back({a,l});
    }
    for(int i=1; i<=n; i++){
        while(!pq.empty())pq.pop();
        for(int i=1; i<=n; i++){
            dist[i] = INF;
        }
        dist[i] = 0;
        pq.push({0,i});
        dijkstra();
        for(int j=1; j<=n; j++){
            if(dist[j]!=INF && dist[j]<=m)sum_save[i]+=save[j]; 
        }
    }
    int max = sum_save[1];
    for(int i=1; i<=n; i++){
        if(max<sum_save[i])max = sum_save[i];
    }
    printf("%d", max);
    return 0;
}