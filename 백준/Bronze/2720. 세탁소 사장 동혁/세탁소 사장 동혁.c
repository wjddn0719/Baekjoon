#include <stdio.h>

int main(){
    int T, i, mon;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &mon);
        while(mon!=0){
            printf("%d ", mon/25);
            mon-=(mon/25)*25;
            printf("%d ", mon/10);
            mon-=(mon/10)*10;
            printf("%d ", mon/5);
            mon-=(mon/5)*5;
            printf("%d ", mon/1);
            mon-=(mon/1)*1;
        }
        printf("\n");
    }
    return 0;
}   