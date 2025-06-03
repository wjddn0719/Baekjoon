#include <stdio.h>

int main(){
    long long int a, i, total=0;
    scanf("%lld", &a);
    total = a;
    if(a==0)printf("1\n");
    else {
        for(i=a-1; i>=1; i--){
            total*=i;
        }
        printf("%lld\n", total);
    }
    return 0;
}