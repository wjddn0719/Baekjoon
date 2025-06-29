#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    int A, N[15001], M,count = 0 ;
    std::cin >> A >> M;
    for(int i=1; i<=A; i++){
        std::cin >> N[i];
    }
    for(int i=1; i<A; i++){
        for(int j = i+1; j<=A; j++){
            if(N[i]+N[j]==M)count+=1;
        }
    }
    std::cout << count;
    return 0;
}