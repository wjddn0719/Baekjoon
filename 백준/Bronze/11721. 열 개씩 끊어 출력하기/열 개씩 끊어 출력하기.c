#include <stdio.h>

int main(){
    char a[100]={0,}, k=9;
    int i;
    scanf("%s", a);
    for(i=0; a[i]!=0; i++){
        printf("%c", a[i]);
        if(i==k){
            printf("\n");
            k+=10;
        }
    }
    return 0;
}