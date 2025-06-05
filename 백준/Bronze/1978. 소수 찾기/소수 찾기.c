#include <stdio.h>


int res(int A){
    int i, flag=1;
    if(A!=1){
        for(i=2; i<A; i++){
            if(A%i==0)flag=0;
        }
    }
    if(flag == 1)return A;
    else return 0;

}

int main(){
    int n, i, map[101]={0,}, real[101]={0,}, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &map[i]);
    }
    for(i=1; i<=n; i++){
        real[i]=res(map[i]);
    }
    for(i=1; i<=n; i++){
        if(real[i]!=0 && real[i]!=1){
            sum+=1;
        }
    }
    printf("%d\n", sum);
    return 0;
}