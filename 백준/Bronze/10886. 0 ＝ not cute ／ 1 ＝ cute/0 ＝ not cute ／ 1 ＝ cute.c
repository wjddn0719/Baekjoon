#include <stdio.h>

int main(){
    int a, i, total=0, j;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        scanf("%d", &j);
        total+=j;
    }
    if(total>a/2)printf("Junhee is cute!\n");
    else printf("Junhee is not cute!\n");
    return 0;
}