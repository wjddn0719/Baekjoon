#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    int map[100001]={0};
    for(int i=1; i<=N; i++){
        int temp;
        cin >> temp;
        map[i]=map[i-1]+temp;
    }
    for(int i=1; i<=M; i++){
        int I,J;
        cin >> I >> J;
        cout << map[J]-map[I-1] << "\n";
    }
    return 0;
}