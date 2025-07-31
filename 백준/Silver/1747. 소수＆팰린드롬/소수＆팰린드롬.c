#include <stdio.h>

int for_prime[1000001]={0,};
int for_brute[1000001]={0,};

int len(int *arr){
    int total = 0;
    for(int i=1; arr[i]!=0; i++){
        total++;
    }
    return total;
}

int reverse(int a){
    int m[8] = {0,};
    if(a>=1000000){
        int op = 1000000;
        for(int i=1; i<=7; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 7;
        for(int i=1; i<=3; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    else if(a>=100000){
        int op = 100000;
        for(int i=1; i<=6; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 6;
        for(int i=1; i<=3; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    else if(a>=10000){
        int op = 10000;
        for(int i=1; i<=5; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 5;
        for(int i=1; i<=2; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    else if(a>=1000){
        int op = 1000;
        for(int i=1; i<=4; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 4;
        for(int i=1; i<=2; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    else if(a>=100){
        int op = 100;
        for(int i=1; i<=3; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 3;
        for(int i=1; i<=1; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    else if(a>=10){
        int op = 10;
        for(int i=1; i<=2; i++){
            m[i] = a/op;
            a%=op;
            op/=10;
        }
        int k = 2;
        for(int i=1; i<=1; i++){
            if(m[i] != m[k]){
                return 0;
            }
            k--;
        }
    }
    return 1;
}

void brute(){
    int k = len(for_prime);
    int o = 1;
    for(int i=1; i<=k; i++){
        int a = reverse(for_prime[i]);
        if(a==1){   
            for_brute[o] = for_prime[i];
            o++;
        }
    }
}

int main(){
    int a, map[2000001]={0,}; 
    scanf("%d", &a);
    for(int i=2; i<=1000; i++){
        for(int j=i*i; j<=2000000; j+=i){
            map[j] = 1;
        }
    }
    int k = 1;
    for(int i=2; i<=2000000; i++){
        if(map[i]==0){
            for_prime[k] = i;
            k++;
        }
    }
    brute();
    int i;
    for(i=1; for_brute[i]<a; i++);
    printf("%d", for_brute[i]);
    return 0;
}