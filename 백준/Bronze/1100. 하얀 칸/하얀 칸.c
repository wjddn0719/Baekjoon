#include <stdio.h>

int main(){
    char map[9][9]={0,};
    int i, j, sum=0;
    for(i=1; i<=8; i++){
        for(j=1; j<=8; j++){
            scanf(" %c", &map[i][j]);
        }
    }
    for(i=1; i<=8; i+=1){
       if(i%2!=0){
        for(j=1; j<=8; j+=2){
            if(map[i][j]=='F')sum+=1;
            }   
       }
       else {
        for(j=2; j<=8; j+=2){
            if(map[i][j]=='F')sum+=1;
        }
       }
    }
    printf("%d\n", sum);
    return 0;
}