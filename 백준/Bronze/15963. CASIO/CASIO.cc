#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    if(a==b)cout << 1;
    else cout << 0;
}