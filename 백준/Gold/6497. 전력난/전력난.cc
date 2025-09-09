#include <iostream> 
#include <vector> 
#include <queue>
#include <utility> 
#include <tuple>
using namespace std; 
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;

int parent[200001]={0,};
int sum = 0;
int r_sum=0;
int coun = 0;

int find(int a){
	if(parent[a]==a)return a;
	return parent[a] = find(parent[a]);
}

int my_union(int a, int b){
	int RootX = find(a);
	int RootY = find(b);
	if(RootX == RootY){
		return 0; 
	}
	else if(RootX<RootY){
		parent[RootY] = RootX; 
	}
	else{
		parent[RootX] = RootY;
	}
	return 1;
}

int main(){
	while(1){
		while(!pq.empty())pq.pop();
		int V, E;
		scanf("%d %d", &V, &E);
		if(!V&&!E)return 0;
		for(int i=0; i<=V; i++){
			parent[i] = i;
		}
		for(int i=1; i<=E; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			r_sum+=c;
			pq.push({c,a,b});
			pq.push({c,b,a});
		}
		while(!pq.empty()){
			int w, a, b;
			tie(w,a,b) = pq.top(); pq.pop();
			if(coun == V-1)break;
			if(my_union(a,b)){
				sum+=w;
				coun++;
			}
		}
			printf("%d\n", r_sum-sum);
			r_sum = 0;
			sum = 0;
			coun = 0;
	}
}