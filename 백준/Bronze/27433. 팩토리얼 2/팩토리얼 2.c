#include <stdio.h>

int main(){
    long long int a, i;
    scanf("%lld", &a);
    long long int total=1;
    for(i=2; i<=a; i++){
        total*=i;
    }
    printf("%lld", total);
    return 0;
}