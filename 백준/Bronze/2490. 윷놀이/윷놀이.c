#include <stdio.h>

int main(){
    int map[4][5]={0,}, i, j, sum=0, sum1=0;
    for(i=1; i<=3; i++){
        for(j=1; j<=4; j++){
            scanf("%d", &map[i][j]);
        }
    }
    for(i=1; i<=3; i++){
        sum=0;
        sum1=0;
        for(j=1; j<=4; j++){
            if(map[i][j]==1)sum+=1;
            else sum1+=1;
        }
        if(sum==3&&sum1==1)printf("A\n");
        else if(sum==2&&sum1==2) printf("B\n");
        else if(sum==1&&sum1==3)printf("C\n");
        else if(sum==4) printf("E\n");
        else if(sum==0)printf("D\n");
    }
    return 0;
}