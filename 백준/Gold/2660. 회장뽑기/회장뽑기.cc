#include <cstdio>

#define INF 987654321

int map[51][51]={0,};

int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i==j)map[i][j] = 0;
            else map[i][j] = INF;
        }
    }
    while(1){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==-1 && b==-1) break;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    for(int k=1; k<=N; k++){
        for(int j=1; j<=N; j++){
            for(int i=1; i<=N; i++){
                if(map[i][j] > map[j][k] + map[k][i])map[i][j] = map[j][k] + map[k][i];
            }
        }
    }
    int min = 0;
    for(int i=1; i<=N; i++){
        min+=map[1][i];
    }
    for(int i=1; i<=N; i++){
        int m = 0;
        for(int j=1; j<=N; j++){
            m+=map[i][j];
        }
        if(min>m) min = m;
    }
    int count = 0;
    for(int i=1; i<=N; i++){
        int score = 0;
        for(int j=1; j<=N; j++){
            score+=map[i][j];
        }
        if(score==min)count++;
    }
    int max = map[1][1];
    for(int i=1; i<=N; i++){
        if(max<map[1][i])max = map[1][i];
    }
    for(int i=1; i<=N; i++){
        int m = map[i][1];
        for(int j=1; j<=N; j++){
            if(m<map[i][j]) m =map[i][j];
        }
        if(m<max) max = m;
    }
    printf("%d %d\n", max, count);
    for(int i=1; i<=N; i++){
        int score = 0;
        for(int j=1; j<=N; j++){
            score+=map[i][j];
        }
        if(score==min){
            printf("%d ", i);
        }
    }
    return 0;
}
