#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, temp=0;
    cin >> a;
    while(a>=5){
        temp+=a/5;
        a/=5;
    }

    cout << temp << '\n';
}