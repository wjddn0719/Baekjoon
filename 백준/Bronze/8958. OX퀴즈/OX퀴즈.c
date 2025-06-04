#include <stdio.h>

int main(){
    char map[81]={0,};
    int N,i,j, sum=0, k=1;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%s", map);
        for(j=0; map[j]!='\0'; j++){
            if(map[j]=='O'){
                sum+=k;
                k+=1;
            }
            else if(map[j]=='X') k=1;
        }
        printf("%d\n", sum);
        sum=0;
        k=1;
    }
    return 0;
}