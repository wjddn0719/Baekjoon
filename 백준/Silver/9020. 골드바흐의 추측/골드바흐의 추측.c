#include <stdio.h>

int end_point(int a,int *arr){
    int k;
    for(k=1; arr[k]<a; k++);
    return k;
}

int main(){
    int a, map[20001]={0,}, is_prime[20001]={0,}, N;
    scanf("%d", &N);
    for(int i=2; i<=100; i++){
        for(int j = i * i; j<=20000; j+=i){
            map[j] = 1;
        }
    }
    int j = 1;
    for(int i=2; i<=20000; i++){
        if(map[i]==0){
            is_prime[j] = i;
            j++;
        }
    }
    for(int r=1; r<=N; r++){
        scanf("%d", &a);
        int s_p = 1, e_p = end_point(a,is_prime), s1, s2;
        while(s_p<=e_p){
            if(is_prime[s_p] + is_prime[e_p] > a){
                e_p--;
            }
            else if(is_prime[s_p] + is_prime[e_p] < a){
                s_p++;
            }
            else{
                s1 = is_prime[s_p];
                s2 = is_prime[e_p];
                s_p++;
                e_p--;
            }
        }
        printf("%d %d\n", s1, s2);
    }
    return 0;
}