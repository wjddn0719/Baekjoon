#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

int parent[1001]={0,};

long long int sum = 0;
int in_degree = 0;

int find(int a){
    if(parent[a]==a) return a;
    return parent[a] = find(parent[a]);
}

int my_union(int a, int b){
    int RootX = find(a);
    int RootY = find(b);
    if(RootX==RootY)return 0;
    else if(RootX < RootY){
        parent[RootY] = RootX;
    }
    else{
        parent[RootX] = RootY;
    }
    return 1;
}

int main(){
    int n, map[1001][1001]={0,};
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            pq.push({map[i][j], i, j});
        }
    }
    while(1){
        if(in_degree==n-1)break;
        int w, a, b;
        tie(w,a,b) = pq.top(); pq.pop();
        if(my_union(a,b)){
            sum+=w;
            in_degree++;
        }
    }
    printf("%lld", sum);
    return 0;
}