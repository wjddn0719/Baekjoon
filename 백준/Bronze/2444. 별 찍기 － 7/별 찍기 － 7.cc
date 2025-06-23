#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a , o=1;
    cin >> a;
    for(int i=a; i>=1; i--){
        int n = i-1;
        for(int j=1; j<=n; j++){
            cout << ' ';
        }
        for(int k=1; k<=2*o-1; k++){
            cout<< '*';
        }
        o+=1;
        cout << '\n';
    }
    o=a-1;
    for(int i=1; i<a; i++){
        int n = i;
        for(int j=1; j<=n; j++){
            cout << ' ';
        }
        for(int k=1; k<=2*o-1; k++){
            cout << '*';
        }
        o-=1;
        cout << '\n';
    }
}