#include <stdio.h>

int result(int a){
    int a1=0, a2=0, a3=0, a4=0;
    a1 = a/1000;
    a-=a1*1000;
    a2 = a/100;
    a-=a2*100;
    a3 = a/10;
    a-=a3*10;
    a4=a;
    if(a1!=0) return a4*1000+a3*100+a2*10+a1;
    if(a2!=0) return a4*100+a3*10+a2;
    if(a3!=0) return a4*10+a3;
    return a4;
}
int main(){
    int X, Y, total=0;
    scanf("%d %d", &X, &Y);
    X = result(X);
    Y = result(Y);
    total = result(X+Y);
    printf("%d\n", total);
    return 0;
}