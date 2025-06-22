#include <iostream>
using namespace std;

int fac(int a);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, r;
    cin >> n >> r;
    int n_fac = fac(n);
    int r_fac = fac(r);
    cout << n_fac/(r_fac*(fac(n-r))) << "\n";
}

int fac(int a){
    int total=1;
    for(int i=1; i<=a; i++){
        total*=i;
    }
    return total;
}