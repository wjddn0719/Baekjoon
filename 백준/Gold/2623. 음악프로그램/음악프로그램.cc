#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
vector<int> node[1001];
queue<int> qu;
vector<int> keep;
int map[1001] = {0,};

int main(){
    int N, M;
    scanf("%d %d", &N ,&M);
    for(int i=1; i<=M; i++){
        int T;
        int mapq[1001] = {0,};
        scanf("%d", &T);
        for(int j=1; j<=T; j++){
            scanf("%d", &mapq[j]);
        }
        for(int j=1; j<=T-1; j++){
            node[mapq[j]].push_back(mapq[j+1]);
            map[mapq[j+1]]++;
        }
    }
    for(int i=1; i<=N; i++){
        if(map[i]==0){
            qu.push(i);
        }
    }
    while(!qu.empty()){
        int current = qu.front();
        keep.push_back(current);
        qu.pop();
        for(int i=0; i<node[current].size(); i++){
            map[node[current][i]]--;
            if(map[node[current][i]]==0){
                qu.push(node[current][i]);
            }
        }
    }
        if(keep.size()<N){
            printf("0\n");
            return 0;
        }
        else{
            for(int i=0; i<keep.size(); i++){
                printf("%d\n", keep[i]);
            }
        }
        return 0;
    }