#include <iostream>

using namespace std;

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
    int N, A, B, C=0;
    cin >> N;
    for(int i=1; i<=N; i++){
        int j = 1, l = 1;
        cin >> A >> B >> C;
        while(C>1){
            if(j==A){
                j=1;
                l+=1;
            }
            else{
                j+=1;
            }
            C-=1;
        }
        cout << j*100+l << "\n";
    }
    return 0;
}