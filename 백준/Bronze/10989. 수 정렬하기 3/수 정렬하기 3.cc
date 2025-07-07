#include <iostream>
using namespace std;
int map[10001]={0,};

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int a, k, max=0;
    cin >> a;
    for(int i=1; i<=a; i++){
        cin >> k;
        if(max<k){
            max = k;
        }
        map[k]+=1;
    }
    for(int i=1; i<=max; i++){
        for(int j=1; j<=map[i]; j++){
            cout <<  i << "\n";
        }
    }
    return 0;
}