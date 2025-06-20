#include <iostream>

using namespace std;

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
    int A, B, min,max, i,j, o;
    cin >> A >> B;
    max = A>B ? A:B;
    min = A>B ? B:A;
    for(j=1; j<=min; j++){
        if(max%j==0 && min % j==0){
            o = j;
        }
    }
    cout << o << "\n";
    for(i=max; i%min!=0; i+=max){
    }
    cout << i << "\n";
    
}