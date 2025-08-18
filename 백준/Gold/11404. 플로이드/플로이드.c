#include <stdio.h>
#define INF 987654321

int min(int a, int b){
    return a<b ? a:b;
}

int main(){
    int n, m, map[101][101];
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j){
                map[i][j] = INF;
            }
            else{
                map[i][j]=0;
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
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(map[i][j]==INF){
                printf("0 ");
            }
            else{
                printf("%d ",map[i][j]);
            }
        }
        printf("\n");
    }

    
    return 0;
}