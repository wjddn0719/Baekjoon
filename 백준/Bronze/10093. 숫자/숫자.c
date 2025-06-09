#include <stdio.h>

int main(){
    long long int d,k,i, o=0, max, min;
    scanf("%lld %lld", &d, &k);
    if(d==k || d+1==k||d==k+1){
        printf("0\n");
        return 0;
    }
    max = d>k ? d:k;
    min = d> k ? k:d;
    printf("%lld\n", max-1-min);
    for(i=min+1; i<max; i++){
      printf("%lld ", i);
    }
    return 0;
}