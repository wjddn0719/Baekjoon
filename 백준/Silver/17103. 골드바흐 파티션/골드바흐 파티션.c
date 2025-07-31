#include <stdio.h>

int map[2000001]={0,}, is_prime[2000001]={0,};

int end_point(int a, int *arr) {
    int left = 1, right = 200000;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] < a) left = mid + 1;
        else right = mid - 1;
    }
    return right; 
}

int main(){
    int a, N;
    scanf("%d", &N);
    for(int i=2; i<=1000; i++){
        for(int j = i * i; j<=2000001; j+=i){
            map[j] = 1;
        }
    }
    int j = 1;
    for(int i=2; i<=2000001; i++){
        if(map[i]==0){
            is_prime[j] = i;
            j++;
        }
    }
    for(int i=1; i<=N; i++){
        int count = 0;
        scanf("%d", &a);
            int s_p = 1, e_p = end_point(a,is_prime);
            while(s_p<=e_p){
                if(is_prime[s_p] + is_prime[e_p] > a){
                    e_p--;
                }
                else if(is_prime[s_p] + is_prime[e_p] < a){
                    s_p++;
                }
                else{
                    s_p++;
                    e_p--;
                    count ++;
                }
            }
            printf("%d\n", count);
    }
    return 0;
}