#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <stack>
#define INF 987654321
using namespace std;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> adj[1001];
stack<int> st;
int map[1001]={0,};
int prev_node[1001] = {0,};
void dijkstra(){
    while(!pq.empty()){
        int current = pq.top().second;
        int current_indegree = pq.top().first;
        pq.pop();
        if(current_indegree > map[current])continue;
        for(int i=0; i < adj[current].size(); i++){
            int next = adj[current][i].first;
            int next_indegree = adj[current][i].second;
            if(current_indegree + next_indegree < map[next]){
                map[next] = current_indegree + next_indegree;
                pq.push({map[next],next});
                prev_node[next] = current;  
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
        adj[a].push_back({b, c});   
    }
    int k, b;
    scanf("%d %d", &k, &b);
    map[k] = 0;
    pq.push({0,k});
    dijkstra();
    printf("%d\n", map[b]);
    for(int i = b; i!=0; i = prev_node[i]){
        st.push(i);
    }
    printf("%d\n", st.size());
    while(!st.empty()){
        int t = st.top();
        printf("%d ", t);
        st.pop();
    }

    return 0;
}