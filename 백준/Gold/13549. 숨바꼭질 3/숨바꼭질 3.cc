#include <iostream> 
#include <vector> 
#include <queue>
#include <utility> 
using namespace std; 
#define INF 1987654321 
priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

vector<pair<int,int>> adj[100001];

int dist[100001]={0,};

void dijkstra(){
	while(!pq.empty()){
		int now = pq.top().second;
		int nowcost = pq.top().first;
		pq.pop();
		for(int i=0; i<adj[now].size(); i++){
			int next = adj[now][i].first;
			int nextcost = adj[now][i].second;
			if(nextcost + nowcost < dist[next]){
				dist[next] = nextcost + nowcost;
				pq.push({dist[next], next});
			}
		}
	}
}

int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	if(K==0){
		printf("%d", N);
		return 0;
	}
	for(int i=0; i<=100000; i++){
		dist[i] = INF;
	}
	for(int i=0; i<=100000; i++){
		if(i-1>0){
			adj[i].push_back({i-1, 1});
		}
		if(i+1<100001){
			adj[i].push_back({i+1,1});
		}
		if(i*2<100001){
			adj[i].push_back({i*2, 0});
		}
	}
	dist[N] = 0;
	pq.push({0, N});
	dijkstra();
	printf("%d", dist[K]);
	return 0;
}