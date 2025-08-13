#include <stdio.h>

int main(){
    int map[101][101]={0,}, a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(int k=1; k<=a; k++){
        for(int j=1; j<=a; j++){
            for(int i=1; i<=a; i++){
                if(map[i][k]&&map[k][j])map[i][j]=1;
            }
        }
    }
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}