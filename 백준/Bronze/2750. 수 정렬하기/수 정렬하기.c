#include <stdio.h>

int main(){
    int N, i, num[1001]={0,}, j, min=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &num[i]);
    }
    for(i=1; i<N; i++){
        for(j=i+1; j<=N; j++){
            if(num[i]>num[j]){
                min=num[i];
                num[i]=num[j];
                num[j]=min;
            }
        }
    }
    for(i=1; i<=N; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}