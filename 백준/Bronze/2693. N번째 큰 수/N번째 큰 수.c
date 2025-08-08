#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        int map[11]={0,};
        for(int j=1; j<=10; j++){
            scanf("%d", &map[j]);
        }
        for(int j=1; j<10; j++){
            for(int k=j+1; k<=10; k++){
                if(map[j]>map[k]){
                    int temp = map[k];
                    map[k] = map[j];
                    map[j] = temp;
                }
            }
        }
        printf("%d\n", map[8]);
    }
    return 0;
}