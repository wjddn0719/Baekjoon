#include <stdio.h>

int main(){
    char a[1001]={0,}, b[1001]={0,};
    int i=0,j=0;
    scanf("%s\n%s", a, b);
    while(a[i]!=0){
        i++;
    }
    while(b[j]!=0){
        j++;
    }
    if(i>=j){
        printf("go");
    }
    else printf("no");
    return 0;
}