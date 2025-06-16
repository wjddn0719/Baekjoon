#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio;
    cout.tie(NULL);
    cin.tie(NULL);
    int N, M, map[1025][1025],k;
    cin >> N >>M;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> k;
            map[i][j] = map[i-1][j]+map[i][j-1]-map[i-1][j-1]+k;
        }
    }
    int x1, y1, x2, y2;
    for(int i=1; i<=M; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << map[x2][y2]-map[x1-1][y2]-map[x2][y1-1]+map[x1-1][y1-1]<< "\n"; 
    }
    return 0;
}