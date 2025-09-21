#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

priority_queue<int, vector<int>, greater<int>> a;
priority_queue<int, vector<int>, less<int>> b;

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int k;
        scanf("%d",&k);
        if(k!=0){
            if(k<0)b.push(k);
            else a.push(k);
        }
        else{
            if(!a.empty() && b.empty()){
                printf("%d\n", a.top());
                a.pop();
            }
            else if(a.empty() && !b.empty()){
                printf("%d\n", b.top());
                b.pop();
            }
            else if(a.empty() && b.empty()){
                printf("%d\n",0);
            }
            else{
                if(abs(a.top())>abs(b.top())){
                    printf("%d\n", b.top());
                    b.pop();
                }
                else if(abs(a.top())<abs(b.top())){
                    printf("%d\n", a.top());
                    a.pop();
                }
                else{
                    if(a.top()>b.top()){
                        printf("%d\n", b.top());
                        b.pop();
                    }
                    else{
                        printf("%d\n",a.top());
                        a.pop();
                    }
                }
            }
        }
    }
    return 0;
}