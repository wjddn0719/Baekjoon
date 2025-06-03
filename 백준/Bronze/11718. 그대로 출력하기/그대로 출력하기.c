#include <stdio.h>

int main(){
    char a[100]={0,},i;
    while(fgets(a, sizeof(a), stdin)!=NULL){
        for(i=0; a[i]!=0; i++){
            printf("%c",a[i]);
        }
    }
}