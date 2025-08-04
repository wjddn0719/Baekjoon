#include <stdio.h>

int main(){
    int a,map[12]={0,1,2,4}, count = 0;
    scanf("%d", &a);
    for(int i=4; i<=11; i++){
        count = 0;
        for(int j=i-3; j<=i; j++){
            count+=map[j];
        }
        map[i] = count;
    }
    for(int i=1; i<=a; i++){
        int k;
        scanf("%d", &k);
        printf("%d\n", map[k]);
    }
    return 0;
}