#include <stdio.h>

int main(){
    int n, total=0;
    scanf("%d", &n);
    if(n%5>0)total=n/5+1;
    else total = n/5;
    printf("%d\n", total);
    return 0;
}