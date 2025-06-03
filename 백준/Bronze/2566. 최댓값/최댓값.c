#include <stdio.h>

int main(){
    int map[10][10]={0,}, i, j, max, max_i, max_j;
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            scanf("%d", &map[i][j]);
        }
    }
    max=map[1][1];
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            if(map[i][j]>max)max=map[i][j];
        }
    }
    printf("%d\n", max);
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            if(map[i][j]==max){
                max_i=i;
                max_j=j;
            }
        }
    }
    printf("%d %d", max_i, max_j);
    return 0;
}