#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a=1, b=2, n, total=0;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==2){
        cout << 2;
        return 0;
    }
    for(int i=3; i<=n; i++){
        total = (a + b)%10007;
        a = b;
        b = total;
    }
    cout << total;
}