#include <stdio.h>

int main(){
    long long int a;
    scanf("%lld" ,&a);
    if(a%5==0 || a%5==2)printf("CY");
    else{
        printf("SK");
    }
    return 0;
}