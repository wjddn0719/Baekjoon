#include <stdio.h>

char bit_3(int k){
    k%=1000000;
    k%=100000;
    k%=10000;
    k%=1000;
    if(k/100!=6) return 0;
    k%=100;
    if(k/10!=6)return 0;
    k%=10;
    if(k!=6) return 0;

    return 1;
}
char bit_4(int k){
    k%=1000000;
    k%=100000;
    k%=10000;
    if(k/1000 != 6) return 0;
    k%=1000;
    if(k/100 != 6) return 0;
    k%=100;
    if(k/10 != 6) return 0;

    return 1;
}
char bit_5(int k){
    k%=1000000;
    k%=100000;
    if(k/10000 != 6) return 0;
    k%=10000;
    if(k/1000 != 6) return 0;
    k%=1000;
    if(k/100 != 6) return 0;
    k%=100;
    return 1;
    
}
char bit_6(int k){
    k%=1000000;
    if(k/100000!=6) return 0;
    k%=100000;
    if(k/10000 != 6) return 0;
    k%=10000;
    if(k/1000 != 6) return 0;
    k%=1000;
    return 1;
}
char bit_7(int k){
    if(k/1000000!=6) return 0;
    if(k/100000!=6) return 0;
    k%=100000;
    if(k/10000 != 6) return 0;
    k%=10000;
    return 1;
}

int main(){
    short N, k=0;
    scanf("%hd", &N);
    for(int i=1; i<=9999999; i++){
        if(i>=1000000 && bit_7(i)){
            k++;
        }
        else if(i>=100000 && bit_6(i)){
            k++;
        }
        else if(i>=10000 && bit_5(i)){
            k++;
        }
        else if(i>=1000 && bit_4(i)){
            k++;
        } 
        else if(i>=100 && bit_3(i)){
            k++;
        }
        if(k==N){
            printf("%d", i);
            return 0;
        }
    }
}