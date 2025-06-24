#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    char a[5][15]={0,};
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(a[j][i]!=0 || a[j][i]!='\0'){
                cout << a[j][i];
            }
        }
    }
}