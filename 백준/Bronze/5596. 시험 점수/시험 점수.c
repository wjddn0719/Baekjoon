#include <stdio.h>

int main(){
    int min[5]={0,}, man[5]={0,},i, sum=0, sum1=0;
    for(i=1; i<=4; i++){
        scanf("%d", &min[i]);
    }
    for(i=1; i<=4; i++){
        scanf("%d", &man[i]);
    }
    for(i=1; i<=4; i++){
        sum+=min[i];
    }
    for(i=1; i<=4; i++){
         sum1+=man[i];
    }
    printf("%d\n", sum>sum1 ? sum:sum1);
    return 0;
}