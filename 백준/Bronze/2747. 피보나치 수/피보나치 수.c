#include <stdio.h>

int main(){
    int a,total=0, temp=1, flag=0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        total = temp+flag;
        temp = flag;
        flag = total;

    }
    printf("%d\n", total);
    return 0;
}