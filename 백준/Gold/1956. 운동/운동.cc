#include <stdio.h>
#define INF 987654321

int min(int a, int b){
    return a<b ? a:b;
}

int main(){
    int n, m, map[401][401];
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j){
                map[i][j] = INF;
            }
            else{
                map[i][j] = 0;
            }
        }
    }
    for(int i=1; i<=m; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(map[a][b]>c){
            map[a][b] = c;
        }
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                map[i][j] = min(map[i][j], map[i][k]+map[k][j]);
            }
        }
    }
    int answer = INF;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j && map[j][i]+map[i][j]<answer){
                answer = map[i][j] + map[j][i];
            }
        }
    }
    if(answer>=INF){
        printf("-1");
        return 0;
    }
    printf("%d", answer);
    return 0;
}