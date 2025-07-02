#include <iostream>
using namespace std;

int fac(int a, int b){
    int result = 1;
    for(int i=1; i<=a; i++){
        result*=(b-i+1);
        result/=i;
    }
    return result; 
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N, a, b;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> a >> b;
        int result = fac(a, b);
        printf("%d\n", result);
    }
}