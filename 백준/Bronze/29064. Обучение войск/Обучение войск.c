#include <stdio.h>

int main(){
    int N, i, map[100000]={0,}, j=0;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &map[i]);
    }
    for(i=0; i<N; i++){
        if(map[i]==1)j+=1;
    }
    if(j>=(N+1)/2){
        printf("0\n");
    }
    else{
        printf("%d\n", ((N+1)/2)-j);
    }
    return 0;
}