#include <stdio.h>

int main(){
    int N, K, jose[1001]={0,};
    scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++){
        jose[i]=i;
    }
    printf("<");
    int start_idx = 0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=K;){
            start_idx++;
            if(start_idx>N)start_idx=0;
            if(jose[start_idx]==0){
                continue;
            }
            j++;
        }
        if(i==N)printf("%d>", jose[start_idx]);
        else printf("%d, ",jose[start_idx]);
        jose[start_idx]=0;
    }
    return 0;
}