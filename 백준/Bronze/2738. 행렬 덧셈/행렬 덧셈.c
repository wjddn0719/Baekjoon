#include <stdio.h>

int main(){
    int A[101][101]={0,}, B[101][101]={0,},i,a,b,j, map[101][101]={0,};
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            map[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=1; i<=a; i++){
        for(j=1; j<=b; j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}