#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> SCC;
vector<int> adj[100001];
stack<int> s;

int coun = 0;
bool finished[100001]={0,};
int map[100001]={0,};

int dfs(int data){
	map[data] = ++coun;
	s.push(data);
	int parent = map[data];
	for(int i=0; i<adj[data].size(); i++){
		if(!map[adj[data][i]])parent = min(parent, dfs(adj[data][i]));
		else if(!finished[adj[data][i]])parent = min(parent, map[adj[data][i]]); 
	}
	if(parent==map[data]){
		vector<int> scc;
		while(1){
			int k = s.top();
			s.pop();
			scc.push_back(k);
			finished[k]=true;
			if(data==k)break;
		}
		sort(scc.begin(),scc.end());
		SCC.push_back(scc);
	}
	return parent;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		int comp[100001]={0,};
		int indeg[100001]={0,};
		int N, M;
		scanf("%d %d", &N, &M);
		for(int j=1; j<=M; j++){
			int a, b;
			scanf("%d %d", &a, &b);
			adj[a].push_back(b);
		}
		for(int j=1; j<=N; j++){
			if(!map[j])dfs(j);
		}
		sort(SCC.begin(), SCC.end());
		for(int j=0; j<SCC.size(); j++){
			for(int k=0; k<SCC[j].size(); k++){
				comp[SCC[j][k]] = j;
			}
		}
		for(int j=1; j<=N; j++){
			for(int k=0; k<adj[j].size(); k++){
				int cu = comp[j];
				int cv = comp[adj[j][k]];
				if (cu != cv) indeg[cv]++;
			}
		}
		int answer = 0;
		for(int j=0; j<SCC.size(); j++){
			if(!indeg[j])answer++;
		}
		printf("%d\n", answer);
		for(int j=1; j<=N; j++){
			SCC.clear();
			adj[j].clear();
			finished[j] = false;
			map[j] = 0;
		}
		while(!s.empty())s.pop();
		coun = 0;
	}
	return 0;
}