#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> Scc;
vector<int> adj[10001];
stack<int> s;
int coun = 0;
bool finished[10001]={0,};
int map[10001]={0,};
int dfs(int x){
	map[x] = ++coun;
	s.push(x);
	int parent = map[x];
	for(int i=0;i<adj[x].size(); i++){
		if(!map[adj[x][i]])parent = min(parent, dfs(adj[x][i]));
		else if(!finished[adj[x][i]])parent = min(parent, map[adj[x][i]]);
	}
	if(parent == map[x]){
		vector<int> scc;
		while(1){
			int k = s.top();
			s.pop();
			scc.push_back(k);
			finished[k] = true;
			if (k == x) break; 
		}
		sort(scc.begin(), scc.end());
		Scc.push_back(scc);
	}
	return parent;
}

int main(){
	int V, E;
	scanf("%d %d", &V, &E);
	for(int i=1; i<=E; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
	}
	for(int i=1; i<=V; i++){
		if(!map[i])dfs(i);
	}
	sort(Scc.begin(), Scc.end());
	printf("%d\n", Scc.size());
	for(int i=0; i<Scc.size(); i++){
		for(int j=0; j<Scc[i].size(); j++){
			printf("%d ", Scc[i][j]);
		}
		printf("-1\n");
	}
	return 0;
}