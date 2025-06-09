#include <stdio.h>

int main(){
    int a, i, K[5]={0,}, min, flag=1;
    char A[5][11]={0,};
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        scanf("%s %d", A[i], &K[i]);
    }
    min = K[1];
    for(i=1; i<=a; i++){
        if(min>K[i]){
            min=K[i];
            flag=i;
        }
    }
    printf("%s\n", A[flag]);
    return 0;
}