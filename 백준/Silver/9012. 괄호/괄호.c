#include <stdio.h>

void arr(char *ch){
    int cnt = 0, i;
    for(i=0; ch[i]!=0; i++);
    for(int j=0; j<i; j++){
        if(ch[j]=='(')cnt++;
        else cnt--;
        if(cnt<0){
            printf("NO\n");
            return;
        }
    }
    if(cnt==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int main(){
    int a;
    char map[51]={0,};
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        scanf("%s", map);
        arr(map);
    }
    return 0;
}