#include <stdio.h>

int main(){
    int M,N, wa[100]={0,},i,j=0, total=0, min;
    scanf("%d %d", &M, &N);
    for(i=1; i*i<=N; i++){
        if(i*i>=M && i*i<=N){
            wa[j]=i*i;
            j+=1;
        }
    }
    min=wa[0];
    for(i=0; i<j; i++){
        total+=wa[i];
        if(min>wa[i])min=wa[i];
    }
    if(j==0){
        printf("-1\n");
        return 0;
    }
    else{
        printf("%d\n%d\n", total, min);
    }
    return 0;
}