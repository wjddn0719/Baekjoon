#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> qu;
int score[1001]={0,};
int keep[1001]={0,};
vector<int> node[1001];
int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        node[a].push_back(b);
        score[b]++;
    }
    int p = 1;
    for(int i=1; i<=N; i++){
        if(!score[i]){
            qu.push(i);
            keep[i] = 1;
        }
    }
    while(!qu.empty()){
        int c = qu.front();
        qu.pop();
        for(int i=0; i<node[c].size(); i++){
            score[node[c][i]]--;
            if(score[node[c][i]]==0){
                qu.push(node[c][i]);
                keep[node[c][i]]= keep[c]+1;
            }
        }
    }
    for(int i=1; i<=N; i++){
        printf("%d ", keep[i]);
    }
    return 0;
}