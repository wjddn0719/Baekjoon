#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int N, M;
    set<string> a;
    set<string> b;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        string wo;
        cin >> wo;
        a.insert(wo);
    }
    for(int i=1; i<=M; i++){
        string wo;
        cin >> wo;
        if(a.find(wo)!=a.end())b.insert(wo);
    }
    vector<string> v(b.begin(), b.end());
    cout << b.size() << "\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}