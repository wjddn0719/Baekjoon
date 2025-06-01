#include <stdio.h>

int main(){
    int k[3], d[3];
    scanf("%1d%1d%1d %1d%1d%1d", &k[0],&k[1],&k[2],&d[0],&d[1],&d[2]);
    if(k[2]>d[2])printf("%d%d%d\n",k[2], k[1],k[0]);
    else if(k[2]==d[2]){
        if(k[1]>d[1])printf("%d%d%d\n", k[2],k[1],k[0]);
        else printf("%d%d%d\n", d[2], d[1],d[0]);
    }
    else if(k[1]==d[1]){
        if(k[0]>d[0])printf("%d%d%d\n", k[2],k[1],k[0]);
        else printf("%d%d%d\n", d[2],d[1],d[0]);
    }
    else printf("%d%d%d\n", d[2],d[1],d[0]);
    return 0;
}