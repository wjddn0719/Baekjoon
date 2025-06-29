#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int M, start_idx=1, end_idx=1, i=0, sum=1;
    cin >> M;
    while(M>=start_idx && end_idx<=M){
        if(sum<M){
            end_idx++;
            sum+=end_idx;
        }
        else if(sum>M){
            sum-=start_idx;
            start_idx++;
        }
        if(sum==M){
            i+=1; 
            end_idx++;
            sum+=end_idx;
        }
    }
    cout << i<<'\n';
    return 0;
}