#include <iostream>
using namespace std;

int mi(int a, int b){
    return a<b ? a:b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N[1000001]={0,}, n;
    cin >> n;
    for(int i=2; i<=n; i++){
        N[i] = N[i-1]+1;
        if(i%2==0){
            N[i] = mi(N[i], N[i/2]+1);
        }
        if(i%3==0){
            N[i] = mi(N[i], N[i/3]+1);
        }
    }
    cout << N[n];
    return 0;
}