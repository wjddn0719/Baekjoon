#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int a;
    cin >> a;
    for(int i=1; i<=a; i++){
        for (int N = a-i; N>0; N--){
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout <<"\n";
    }
    return 0;
}