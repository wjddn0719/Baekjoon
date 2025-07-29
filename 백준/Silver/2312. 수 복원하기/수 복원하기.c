#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        int k, b = 2,count = 0;
        scanf("%d", &k);
        while(k!=1){
            if(k%b==0){
                k/=b;
                count++;
            }
            else {
                if(count > 0){
                printf("%d %d\n", b, count);
                count = 0;
                }
                b++;
            }
        }
        printf("%d %d\n", b, count);
    }
    return 0;
}