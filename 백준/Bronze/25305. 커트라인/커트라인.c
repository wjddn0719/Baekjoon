#include <stdio.h>

int main(){
    int N, map[1001]={0,},k,i, max=0, l=0;
    scanf("%d %d", &N, &k);
    for(i=1; i<=N; i++){
        scanf("%d", &map[i]);
    }
    for(int j=1; j<=k; j++){
        max=0;
        for(i=1; i<=N; i++){
            if(max<map[i]){
                max=map[i];
                l=i;
        }
    }
    map[l]=0;
}
    printf("%d\n", max);
    return 0;
}