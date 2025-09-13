#include <iostream> 
#include <vector> 
#include <queue>
#include <utility> 
#include <stack>
using namespace std; 
#define INF 1987654321 
priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
stack<int> st;
vector<pair<int,int>> adj[100001];
int parent[100001]={0,};
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
                parent[next] = now;
			}
		}
	}
}

int main(){
	int N, K;
	scanf("%d %d", &N, &K);
    if(N==1 && K==0){
        printf("1\n1 0");
        return 0;
    }
    if(N==K){
        printf("0\n%d", N);
        return 0;
    }
    for(int i=0; i<=100000; i++){
        parent[i] = -1;
    }
	for(int i=0; i<=100000; i++){
		dist[i] = INF;
	}
	for(int i=0; i<=100000; i++){
		if(i-1>=0){
			adj[i].push_back({i-1, 1});
		}
		if(i+1<100001){
			adj[i].push_back({i+1,1});
		}
		if(i*2<100001){
			adj[i].push_back({i*2, 1});
		}
	}
    
	dist[N] = 0;
	pq.push({0, N});
	dijkstra();
    printf("%d\n", dist[K]);
    for(int i=K; parent[i]!=-1; i = parent[i]){
        st.push(i);
    }
    st.push(N);
    while(!st.empty()){
        printf("%d ", st.top());
        st.pop();
    }
	return 0;
}