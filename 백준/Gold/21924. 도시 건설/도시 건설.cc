#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

vector<pair<int,int>> adj[100001];
int visited[100001]={0,};
long long int sum = 0;
int V = 0;
int main(){
    int N, M;
    long long int R = 0;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        R+=c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    pq.push({0,1});
    while(!pq.empty() && V<N){
        int current = pq.top().second;
        int value = pq.top().first;
        pq.pop();
        if(visited[current])continue;
        visited[current] = 1;
        sum+=value;
        V++;
        for(int i=0; i<adj[current].size(); i++){
            int next = adj[current][i].first;
            int nextValue = adj[current][i].second;
            if(!visited[next])pq.push({nextValue, next});
        }
    }
    if(V<N){
        printf("-1");
        return 0;
    }
    printf("%lld", R-sum);
    return 0;
}