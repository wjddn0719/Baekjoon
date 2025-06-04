#include <stdio.h>

int main(){
    int al[123], i, j, an;
    char word[100]={0,};
    for(i=0; i<123; i++){
        al[i]=-1;
    }
    scanf("%s", word);
    for(i=0; word[i]!='\0'; i++){
        an=word[i];
        for(j=97; j<=122; j++){
            if(j==an && al[j]==-1)al[j]=i;
        }
    }
    for(i=97; i<=122; i++){
        printf("%d ", al[i]);
    }
    return 0;
}