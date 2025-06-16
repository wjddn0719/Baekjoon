#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int a, b, i, j, map[301][301];
    cin >> a >> b;
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            cin >> map[i][j];
        }
    }
    int l,k,o,x,y;
    cin >> l;
    for(i=1; i<=l; i++){
        int total =0;
        cin >> k >> o>>x>>y;
        for(int m=k; m<=x; m++){
            for(int N=o; N<=y; N++){
                total+=map[m][N];
            }
        }
        cout << total << "\n";
    }
    return 0;
}
    