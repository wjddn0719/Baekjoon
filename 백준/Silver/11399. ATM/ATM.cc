#include <iostream>
#include <algorithm>
using namespace std;
int map[1001]={0,};

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%d", &map[i]);
    }
    sort(map+1, map+1+a);
    int sum =map[1];
    for(int i=2; i<=a; i++){
        map[i] = map[i-1] + map[i]; 
        sum+=map[i];
    }
    printf("%d", sum);
    return 0;
}