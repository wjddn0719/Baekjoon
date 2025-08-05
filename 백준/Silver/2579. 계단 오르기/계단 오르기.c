#include <stdio.h>

int max(int a, int b){
    return a>b?a:b;
}

int main(){
    int a, value[301]={0,}, sum[301]={0,};
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%d", &value[i]);
    }
    sum[1] = value[1];
    sum[2] = value[1] + value[2];
    sum[3] = max(value[3]+value[1], value[2] + value[3]);
    for(int i=3; i<=a; i++){
        sum[i] = max(value[i]+sum[i-2], sum[i-3] + value[i-1]+value[i]);
    }
    printf("%d", sum[a]);
    return 0;
}
