#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            int a;
            scanf("%d", &a);
            if(pq.size()<N)pq.push(a);
            else if(a>pq.top()){
                pq.pop();
                pq.push(a);
            }
        }
    }
    printf("%d", pq.top());
    return 0;
}