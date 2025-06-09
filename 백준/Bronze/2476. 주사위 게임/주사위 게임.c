#include <stdio.h>

int main(){
    int n, i, a, b,c, total=0, N[1000]={0,}, max=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        total=0;
        scanf("%d %d %d", &a, &b, &c);
        if(a==b && a==c && b==c){
            total+=10000+a*1000;
        }
        else if(a==b || a==c){
            total+=1000+a*100;
        }
        else if(b==c){
            total+=1000+b*100;
        }
        else total+= ((a>b ? a:b) > c ? (a>b ? a:b):c)*100;
        N[i]=total;
    }
    max=N[1];
    for(i=1; i<=n; i++){
        if(max<N[i])max=N[i];
    }
    printf("%d\n", max);
    return 0;
}