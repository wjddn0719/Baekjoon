#include <stdio.h>

long long int 공배수(long long int b,long long int c){
    long long int Max = b>c ? b:c;
    long long int Min = b>c ? c:b;
    long long int i = Max;
    for(i = Max; i%Min!=0; i+=Max);
    return i;
}


int main(){
    long long int a, b, c;
    scanf("%lld", &a);
    for(int i=1; i<=a; i++){
        scanf("%lld %lld", &b, &c);
        int j = 공배수(b, c);
        printf("%lld\n", j);
    }
    return 0;
}