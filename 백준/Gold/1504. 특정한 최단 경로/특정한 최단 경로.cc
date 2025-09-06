#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#define INF 987654321
using namespace std;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int,int>> edge[1001]; 
int distArr[1001]; 

void dijkstra(int a, int N){
    while(!pq.empty())pq.pop();
    for(int i=1; i<=N; i++){
        distArr[i] = INF;
    }
    distArr[a] = 0;
    pq.push({0, a});
    while(!pq.empty()){
        int current = pq.top().second;
        int currentValue = pq.top().first;
        pq.pop();
        for(int i=0; i<edge[current].size(); i++){
            int next = edge[current][i].first;
            int nextValue = edge[current][i].second;
            if(currentValue + nextValue < distArr[next]){
                distArr[next] = currentValue + nextValue;
                pq.push({distArr[next], next});
            }
        }
    }
}

int main(){
    int N, E;
    scanf("%d %d", &N, &E);
    for(int i=1; i<=N; i++){
        distArr[i] = INF;
    }
    for(int i=1; i<=E; i++){
        int a,b, c;
        scanf("%d %d %d", &a, &b, &c);
        edge[a].push_back({b,c});
        edge[b].push_back({a,c});
    }
    int v1, v2, sum = 0, sum1 = 0;
    scanf("%d %d", &v1, &v2);
    if(v1 == N){
        dijkstra(1,N);
        if(distArr[v2] < INF) sum+=distArr[v2];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v2,N);
        if(distArr[N] < INF) sum+=distArr[N];
        else{
            printf("%d", -1);
            return 0;
        }
        printf("%d", sum);
        return 0;
    }
    else if(v2==N){
        dijkstra(1,N);
        if(distArr[v1] < INF) sum+=distArr[v1];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v1,N);
        if(distArr[N] < INF) sum+=distArr[N];
        else{
            printf("%d", -1);
            return 0;
        }
        printf("%d", sum);
        return 0;
    }
    else{
        dijkstra(1,N);
        if(distArr[v1] < INF) sum+=distArr[v1];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v1,N);
        if(distArr[v2] < INF) sum+=distArr[v2];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v2,N);
        if(distArr[N] < INF) sum+=distArr[N];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(1,N);
        if(distArr[v2] < INF) sum1+=distArr[v2];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v2,N);
        if(distArr[v1] < INF) sum1+=distArr[v1];
        else{
            printf("%d", -1);
            return 0;
        }
        dijkstra(v1,N);
        if(distArr[N] < INF) sum1+=distArr[N];
        else{
            printf("%d", -1);
            return 0;
        }
        printf("%d", sum1>sum ? sum:sum1);
        return 0;
    }
}