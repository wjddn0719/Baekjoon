#include <stdio.h>

int main(){
    int T, P, Q;
    scanf("%d", &T);
    for(int i=1; i<=T; i++){
        scanf("%d %d", &P, &Q);
        long long int fibo[10001]={0,1};
        for(int j=2; j<=P; j++){
            fibo[j] = (fibo[j-2] + fibo[j-1])%Q;
        }
        printf("Case #%d: %lld\n",i, fibo[P]%Q);
    }
    return 0;
}