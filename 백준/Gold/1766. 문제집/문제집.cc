#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
vector<int>node[32001];
int score[32001]={0,};
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M; i++){
        int A,B;
        scanf("%d %d", &A, &B);
        node[A].push_back(B);
        score[B]++;
    }
    for(int i=1; i<=N; i++){
        if(score[i]==0)pq.push(i);
    }
    while(!pq.empty()){
        int st = pq.top();
        pq.pop();
        printf("%d ", st);
        for(int i=0; i<node[st].size(); i++){
            score[node[st][i]]--;
            if(score[node[st][i]]==0)pq.push(node[st][i]);
        }
    }
    return 0;
}